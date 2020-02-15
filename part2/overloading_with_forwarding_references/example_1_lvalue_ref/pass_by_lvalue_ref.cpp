#include <iostream>


class Widget {
  
};

// Function with lvalue reference (1)
void f (Widget& w) 
{
  std::cout << "(1) Using lvalue reference" << std::endl;
}

// Function with lvalue reference-to-const (2)
void f (const Widget& w) 
{
  std::cout << "(2) Using lvalue reference-to-const" << std::endl;
}

// Function with rvalue reference (3)
void f (Widget&& w) 
{
  std::cout << "(3) Using rvalue reference" << std::endl;
}

// Function with rvalue reference-to-const (4)
void f (const Widget&& w)
{
  std::cout << "(4) Using rvalue reference-to-cosnt" << std::endl;
}

// Function template with forwarding referencce (5)
template <typename T>
void f ( T&& t)
{
  std::cout << "(5) Using function template with forwarding reference" << std::endl;
}

// Function template with rvalue reference-to-const (6)
template <typename T>
void f ( const T&& t) 
{
  std::cout << "(6) Using function template with rvalue reference-to-const" << std::endl;
}


int main () {
  Widget w {};
  f(w); // Calling priority (1) -> (5) -> (2)
  }