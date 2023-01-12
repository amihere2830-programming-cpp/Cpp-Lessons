
// This brings in the iostream
#include <iostream>


using namespace std;

consteval int get_value(){
    return 3;
}

int main(){

    /*
    Double line comments

     constexpr int value = get_value();
     std::cout << "value : " << value << std::endl;
    */ 

    cout << "Hello world" << endl;
    cout << "Number1 has " << ((int) get_value() * (int) get_value())<< endl;
    cout << "Number2" << endl;
    return 0;
}