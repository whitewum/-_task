#include<iostream>
#include<vector>
#include<numeric>
#include<cstdio>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = accumulate(vec.cbegin(), vec.cend(), 0);
    std::cout << sum << std::endl;
    return 0;
}
