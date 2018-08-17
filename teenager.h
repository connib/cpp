#include <iostream>
#include <string>


class teenager {
 public:
  teenager(std::string who = "anon", int years = 1);
  std::string name;
  bool in_secondary_school();
  bool can_drive();
 private:
  int age;
};

