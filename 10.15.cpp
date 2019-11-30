#include<iostream>
#include<cstdio>

void test(const int &a) {
    auto f = [a] (const int b = 10) { return a+b; };
    std::cout << f() << std::endl;
}

int main() {
    test(10);
    return 0;
}
