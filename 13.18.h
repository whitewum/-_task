#ifndef D__VEDA_C_CPPPRIMER_ESPIDE13_13_18_H_
#define D__VEDA_C_CPPPRIMER_ESPIDE13_13_18_H_

#include <string>

class Employee {
 public:
    Employee();
    explicit Employee(const std::string& name);

    const int id() const { return ID; }

 private:
    std::string Name;
    int ID;
    static int Credit = 0;
};

Employee::Employee() {
    ID = Credit++;
}

Employee::Employee(const string& name) {
    ID = Credit++;
    Name = name;
}

#endif  // D__VEDA_C_CPPPRIMER_ESPIDE13_13_18_H_
