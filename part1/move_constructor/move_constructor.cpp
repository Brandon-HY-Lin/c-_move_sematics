#include <iostream>
#include <vector>
#include <chrono>

class Widget {
private:
  int i {0};
  std::string s {};
  int *pi{ nullptr };
  
public:
  // Constructor
  Widget(int const i, std::string const s, int *pi)
      : i(i), s(s), pi(pi)
  {
//    std::cout << "Constructor" << std::endl;
  }
  
  // Copy constructor
  Widget(Widget const &w)
      : i(w.i), s(w.s), pi(w.pi)
    {
//      std::cout << "Copy constructor" << std::endl;
    }
  
  // Move constructor
  Widget(Widget&& w) noexcept
      : i(std::move(w.i)),
      s(std::move(w.s)),
      pi(std::move(w.pi)) 
  {
        w.pi = nullptr;
//        std::cout << "Move constructor" << std::endl;
  }
};

int main () {
  std::string s("Long string that needs to be copied");
  std::vector<Widget> v {};
    
  constexpr std::size_t N( 10000 );
  
  // Define timer
  std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
  start = std::chrono::high_resolution_clock::now();
  
  for (std::size_t i = 0UL; i < N; ++i) {
    Widget w {1, s, nullptr};
    v.push_back(std::move(w));
//      v.push_back(w);
  }
  
  end = std::chrono::high_resolution_clock::now();
  const std::chrono::duration<double> elapsedTime( end - start);
  const double seconds( elapsedTime.count());
  
  std::cout << " Runtime: " <<  seconds << "s\n\n";
}