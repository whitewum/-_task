#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
typedef std::string str;

void cs (str &s, const str &oldVal, const str &newVal) {
    // std::cout << s << std::endl;
    for (auto it = s.begin(); it != s.end(); it++) {
        if (*it == 't') {
            // std::cout << it << std::endl;
            s.erase(it, it+oldVal.length());
            for (auto it2 = newVal.end()-1; it2 != newVal.begin(); it2--) {
                s.insert(it, *it2);
                // std::cout << s << std::endl;
            }
            auto it2 = newVal.begin();
            s.insert(it, *it2);
        }
    // std::cout << s << std::endl;
    // std::cout << *it << std::endl;
    }
    std::cout << s << std::endl;
    // std::cout << "x" << std::endl;
}

int main() {
    std::cout << "方便演示，因此string初始包含的t开头的单词只有through或though" << std::endl;
    std::cout << "普通查找低效，kmp等算法对于这道小题量较大，且不是重点" << std::endl;
    std::cout << "string1 = " << "thru thru" << std::endl;
    std::cout << "string2 = " << "tho tho" << std::endl;
    str s1("thru thru");
    str s2("tho tho");
    str ov("thru");
    str nv("through");
    cs(s1, ov, nv);
    ov = str("tho");
    nv = str("though");
    cs(s2, ov, nv);
    return 0;
}