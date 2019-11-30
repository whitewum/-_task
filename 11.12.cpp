#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<string>

int main() {
    std::vector<std::pair<std::string, int>> v;
    std::string s;
    int i;
    while (std::cin >> s >> i) {
        v.push_back({s, i});
    }
    for (auto it : v)
        std::cout << it.first << " " << it.second<< std::endl;
    return 0;
}
