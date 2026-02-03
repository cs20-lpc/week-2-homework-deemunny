#include <iostream>

// TODO: Create a class template named Pair
// It should accept TWO different data types

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // TODO: Write PROTOTYPE for  constructor that initializes both values
    Pair(T1 val1, T2 val2) : first(val1), second(val2){}
    // TODO: Write PROTOTYPE for  function named print()
    void print() { std::cout << "(" << first << ", " << second << ")" << std::endl;}
    // It should display both values in the format:
    // (value1, value2)
};

// TO DO: Include implementation file here
