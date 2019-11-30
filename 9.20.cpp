#include<iostream>
#include<cstdio>
#include<vector>
#include<list>
#include<deque>

int main() {
    std::list<int> ilist{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> dq1;
    std::deque<int> dq2;
    for (auto it : ilist) {
        if (it%2 == 0)
            dq1.push_back(it);
        else
            dq2.push_back(it);
    }
    return 0;
}
