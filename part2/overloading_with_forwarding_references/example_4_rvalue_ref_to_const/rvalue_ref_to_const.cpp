#include <iostream>

class Widget
{
  
};

const Widget getWidget ()
{
  return Widget();
}

// Function with lvalue ref
void f ( Widget& w)
{
  std::cout << "(1) Calling lvalue ref" << std::endl;
}

// Function with lvalue ref-to-const
void f (const Widget& w)
{
  std::cout << "(2) Calling lvalue ref-to-const" << std::endl;
}

// Function with rvalue ref
void f ( Widget&& w)
{
  std::cout << "(3) Calling rvalue ref" << std::endl;
}

// Function with rvalue ref-to-const
void f ( const Widget&& w)
{
  std::cout << "(4) Calling rvalue ref-to-const" << std::endl;
}

// Function template with forwarding ref
template <typename T>
void f ( T&& t)
{
  std::cout << "(5) Calling function template with forwarding ref" << std::endl;
}

// Function template with rvalue ref-to-const
template <typename T>
void f ( const T&& t)
{
  std::cout << "(6) Calling function template with rvlaue ref-to-const" << std::endl;
}

int main () {
  
  f (getWidget());  // Priority: (4) -> (6) -> (5) -> (2)
}