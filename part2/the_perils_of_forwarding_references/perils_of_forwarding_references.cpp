#include <iostream>
#include <string>

class Person {
private:
  std::string name;
  
public:
  Person(std::string const &name)   // (1)
  {
    std::cout << "Calling (1) Constructor of lvalue reference-to-const" << std::endl;
  }
  
  template <typename T>
  Person(T&& name) // (2)
  {
    std::cout << "Calling (2) Constructor of perfect forwarding" << std::endl;
  }
};

int main () {
  std::cout << "Person p1(\"Bjarne\")" << std::endl;
  Person p1("Bjarne");
  std::cout << "\n";
  
  std::cout << "Person p2(name)" << std::endl;
  std::string name( "Herb" );
  Person p2(name);
  std::cout << "\n";
  
  std::cout << "Person p3(p1)" << std::endl;
  Person p3(p1);
}