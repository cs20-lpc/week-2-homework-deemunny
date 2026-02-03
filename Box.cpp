#include <string>
#include <iostream>

template <typename T>
class Box {
private:
    T value;

public:
    // TODO: Constructor - done
    Box(T val) : value(val){}

    // TODO: setValue - done in ctor

    // TODO: getValue
    T getValue() { return value; }

    // TODO: print
    void print() { std::cout << value << std::endl; }
};

int main()
{
  Box<int> intBox(10);
  Box<double> doubleBox(3.14);
  Box<std::string> stringBox("CS20");

  intBox.print();
  doubleBox.print();
  stringBox.print();
}
