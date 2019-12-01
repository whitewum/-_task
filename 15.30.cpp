#include<iostream>
#include<memory>
#include<set>
#ifndef Quote_H_
#include"Quote.h"
/* 引用该头文件是因为之后的total_receipt函数中需要调用print_total函数*/
#endif

class Basket {
 public:
    void add_item(const std::shared_ptr<Quote> &sales) {
        items.insert(sales);
    }
    double total_receipt(std::ostream&) const;
 private:
    static bool compare(const std::shared_ptr<Quote> &lhs,
                        const std::shared_ptr<Quote> &rhs) {
        return lhs->isbn() < rhs->isbn();
    }
    std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items { compare };
};

double Basket::total_receipt(std::ostream &os) const {
    double sum = 0.0;

    for (auto iter = items.cbegin();
               iter != items.cend();
         iter = items.upper_bound(*iter)) {
        sum += print_total(os, **iter, items.count(*iter));
    }
    std::os << "Total Sale: " << sum << std::endl;
    return  sum;
}
