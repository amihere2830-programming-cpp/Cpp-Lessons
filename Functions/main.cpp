// This brings in the iostream
#include <iostream>


using namespace std;

int addNumbers(int num1, int num2){
    return num1+num2;
}

int multiplyNumbers(int num1, int num2){
    return num1*num2;
}

int main(){

    int number1 = 13;
    int number2 = 55;

    int sum = addNumbers(number1, number2);
    int multiply = multiplyNumbers(number1, number2);

    cout << number1 << " + " << number2 << "= "
        << sum << endl;

    cout << number1 << " x " << number2 << "= "
        << multiply << endl;

    return 0;
}