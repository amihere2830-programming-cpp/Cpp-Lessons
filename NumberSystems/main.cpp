// This brings in the iostream
#include <iostream>
#include <string>

using namespace std;

int main(){

    int number1 = 15; //decimal
    int number2 = 017; //Octal
    int number3 = 0x0F; //hex
    int number4 = 0b00001111; //binary

    cout << "number1: " << number1 << ", number2: " << number2 
    << ", number3: " << number3 << ", number4: " << number4 << endl;

    return 0;
}