#include <iostream>
#include <string>

class Widget
{
private:
  int i{ 0 };
  std::string s{};
  int* pi{ nullptr };
  
public:
  Widget() {
      std::cout << "Constructor with no value" << std::endl;
  }
  
  // Constructor
  Widget(int const i, std::string const s, int* pi)
      : i(i), s(s), pi(pi)
    {
        std::cout << "Constructor" << std::endl;
    }
  // Copy assignment
  Widget& operator=(Widget const &w)
  {
    std::cout << "Copy assignment";
    i = w.i;
    s = w.s;
    pi = w.pi;
  }
  
  // Move assignment
  Widget& operator=(Widget &&w) noexcept
  {
    std::cout << "Move assignment" << std::endl;
    
    delete pi;
    i = std::move(w.i);
    s = std::move(w.s);
    pi = std::move(w.pi);
    
    w.pi = nullptr;
    
    return *this;
  }
};

int main () {
  std::string s("Long string that needs to be copied");
  Widget w1 {1, s, nullptr};
  Widget w2;
  
  std::cout << "\n\n";
  std::cout << "Start executing: w2=w1" << std::endl;
  w2 = w1;
  
  std::cout << "\n\n";
  std::cout << "Start executing: w2 = std::move(w1)" << std::endl;
  w2 = std::move(w1);
}