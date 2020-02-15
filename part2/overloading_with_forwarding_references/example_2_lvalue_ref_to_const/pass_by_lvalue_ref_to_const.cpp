#include <iostream>

class Widget {
  
};

// Function with lvalue reference
void f (Widget& w)
{
  std::cout << "(1) Calling lvalue reference" << std::endl;
}

// Function with lvalue reference-to-const
void f ( const Widget& w)
{
  std::cout << "(2) Calling lvalue reference-to-const" << std::endl;
}

// Function with rvalue reference
void f ( Widget&& w)
{
  std::cout << "(3) Calling rvalue reference" << std::endl;
}

// Function with rvalue reference-to-const
void f (const Widget&& w)
{
  std::cout << "(4) Calling rvalue reference-to-const" << std::endl;
}

// Function template with forwarding reference
template <typename T>
void f (T&& t)
{
  std::cout << "(5) Calling function template with forwarding reference" << std::endl;
}

// Functio template with rvalue reference-to-const
template <typename T>
void f ( const T&& t)
{
  std::cout << "(6) Calling function template the rvalue reference-to-const" << std::endl;
}

int main () {
  
  const Widget w {};
  
  f( w );  // Priority: (2) -> (5)
}