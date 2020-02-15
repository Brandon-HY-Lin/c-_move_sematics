#include <iostream>

class Widget
{
  
};


Widget getWidget()
{
  return {};
}

// Function with lvalue reference
void f ( Widget& w)
{
  std::cout << "(1) Calling with lvalue ref" << std::endl;
}

// Function with lvalue reference-to-const
void f (const Widget& w)
{
  std::cout << "(2) Calling with lvalue ref-to-const" << std::endl;
}

// Function with rvalue ref
void f ( Widget&& w)
{
  std::cout << "(3) Calling with rvalue ref" << std::endl;
}

// Function with rvalue ref-to-const
void f ( const Widget&& w)
{
  std::cout << "(4) Calling with rvalue ref-to-cosnt" << std::endl;
}

// Function template with forwarding ref
template <typename T>
void f (T&& t)
{
  std::cout << "(5) Calling function template with forwarding ref" << std::endl;
}

// Function template with rvalue ref-to-const
template <typename T>
void f ( const T&& t)
{
  std::cout << "(6) Calling function template with rvalue ref-to-const" << std::endl;
}

int main ()
{
  
  f ( getWidget()); // Priority: (3) -> (5) -> (4) -> (6) -> (2)
}