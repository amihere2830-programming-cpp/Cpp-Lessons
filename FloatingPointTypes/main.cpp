// This brings in the iostream
#include <iostream>
#include <iomanip>  // use to set precision at standard output stream

using namespace std;

int main(){

    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    cout << setprecision(20); //Control the precision from std::cout
    cout << "float number1: " << number1 << ", " << sizeof(float) << " bytes" << endl;   //7 digits
    cout << "double number2: " << number2 << ", " << sizeof(double) << " bytes" << endl; // 15 gigits
    cout << "long double number3: " << number3 << ", " << sizeof(long double) << " bytes" << endl;  // 15+ digits

    cout << "------------------------------------------" << endl;

    double num1{4.5};
    double num2{};
    double num3{};

    // Infinity
    double result1{num1/num2};

    //NaN
    double result2{num2/num3};

    cout << num1 << "/" << num2 << "= " << result1 << endl;
    cout << num2 << "/" << num3 << "= " << result2 << endl;

    return 0 ;
}