#include <iostream>
using namespace std;

template <typename T> 
T myMax(T x, T y){
    return (x>y) ? x : y;
}

int main() {
    cout << "Test";
    cout << myMax(3, 7) << endl;
    cout << myMax(3.5, 2.1) << endl;
    cout << myMax(string("apple"), string("banana")) << endl;
    return 0;
}
