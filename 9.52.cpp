#include<iostream>
#include<string>
#include<stack>
typedef std::string string;
int main(int argc, char *argv[]) {
    std::cout << R"(中缀表达式未学过，因此参考了网上的代码)" << std::endl;
    const string expr("x()x(xxxx(xx(xxxx)))xxxx(x)xx");
    const char val = '$';
    int num = 0;
    std::stack<char> stk;
    for (auto c : expr) {
        stk.push(c);
        if (c == '(')
            ++num;
        if (num && c == ')') {
            while (stk.top() != '(')
                stk.pop();
            stk.pop();
            stk.push(val);
            --num;
        }
    }
    string s;
    while (!stk.empty()) {
        s.insert(s.begin(), stk.top());
        stk.pop();
    }
    std::cout << s << std::endl;
    return 0;
}
