#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using std::istream;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

class StrLenIs {
 public:
    explicit StrLenIs(int len) : len(len) { }
    bool operator()(const string &str) { return str.length() == len; }

 private:
    int len;
};

void readStr(istream &is, vector<string> &vec) {
    string word;
    while (is >> word) {
        vec.push_back(word);
    }
}

int main() {
    vector<string> vec;
    readStr(cin, vec);
    const int minLen = 1;
    const int maxLen = 10;
    for (int i = minLen; i <= maxLen; ++i) {
        StrLenIs slenIs(i);
        cout << "len: " << i << ", cnt: " \
             << count_if(vec.begin(), vec.end(), slenIs) << endl;
    }
    return 0;
}
