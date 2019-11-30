#include<iostream>
#include<cstdio>
#include<list>
#include<string>

void cut(std::list<std::string> &words) {
    words.sort();
    words.unique();
    for (auto it : words) {
        std::cout << it << " ";
    }
}

int main() {
    std::list<std::string> ls{"fox", "jumps", "over", "quick", \
    "red", "red", "show", "the", "the", "turtle"};
    for (auto it : ls) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    cut(ls);
    return 0;
}
