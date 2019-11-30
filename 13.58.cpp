#include<vector>
#include<iostream>
#include<algorithm>

using std::vector;
using std::sort;

class Foo {
 public:
    Foo sorted()&&;
    Foo sorted() const&;

 private:
    vector<int> data;
};

Foo Foo::sorted() && {
    sort(data.begin(), data.end());
    return *this;
}

Foo Foo::sorted() const & {
    // Foo ret(*this);
    // sort(ret.data.begin(), ret.data.end());
    // return ret;

    // Foo ret(*this);
    // ret.sorted();
    // return ret;
    return Foo(*this).sorted();
}

int main() {
    Foo().sorted();
    Foo f;
    f.sorted();
    return 0;
}
