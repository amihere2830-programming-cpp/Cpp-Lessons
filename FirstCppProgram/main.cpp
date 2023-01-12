
#include <iostream>

using namespace std;

consteval int get_value(){
    return 3;
}

int main(){
    // constexpr int value = get_value();
    // std::cout << "value : " << value << std::endl;

    cout << "Hello world" << endl;
    cout << "Number 1" << endl;
    cout << "Number2" << endl;
    return 0;
}