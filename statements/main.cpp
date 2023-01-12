
// This brings in the iostream
#include <iostream>


using namespace std;

consteval int get_value(){
    return 3;
}

int main(){

    // First number
    int number1 = 12;

    // Second Number
    int number2 =10;

    // Sum the numbers
    int sum = number1 + number2;

    cout << "The sum of " << number1 << " and " << number2 
            << ": " << sum << endl;

    return 0;
}