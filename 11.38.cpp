#include <unordered_map>
#include <set>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using std::string;

void wordCounting() {
    std::unordered_map<string, size_t> word_count;
    string word;
    while (std::cin >> word)
        ++word_count[word];
    for (const auto &w : word_count)
        std::cout << w.first << " occurs " << w.second
                  << (w.second > 1 ? "times" : "time") << std::endl;
}

void wordTransformation() {
    std::ifstream ifs_map("../word_transformation.txt");
    std::ifstream ifs_content("../given_to_transform.txt");
    if (!ifs_map || !ifs_content) {
        std::cerr << "no such file!" << std::endl;
        return;
    }

    std::unordered_map<string, string> trans_map;
    for (string key, value; ifs_map >> key && getline(ifs_map, value);)
        if (value.size() > 1)
            trans_map[key] =
                value.substr(1).substr(0, value.find_last_not_of(' '));
    for (string text, word;
        getline(ifs_content, text);
        std::cout << std::endl)
        for (std::istringstream iss(text); iss >> word;) {
            auto map_it = trans_map.find(word);
            std::cout << (map_it == trans_map.cend() ? word : map_it->second)
                      << " ";
        }
}

int main() {
    wordCounting();
    wordTransformation();
}
