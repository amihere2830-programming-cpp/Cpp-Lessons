/*
The AUTO KEYWORD
----------------
the 'auto' keyword is used to let the compiler deduce data type without
explicitly being informed. 

*/

// This brings in the iostream
#include <iostream>
#include <iomanip>  // use to set precision at standard output stream

using namespace std;

int main(){

    int a {6};  // a is an int
    int b {3}; // b is an int
    int c {10}; // c is an int
    int d {2}; // d is an int
    int e {2}; // e is an int   
    int f {4}; // f is an int
    int g {1}; // g is an int

    int result = a + b * c / d - d / e -f + g; // result is an int
 
    cout << "The result is: " << result << endl;


    result = a + b * (c / d) - (d / e) -f + g; // result is an int
 
    cout << "The result is: " << result << endl;


    result = (a + b )* c / d - d / (e -f )+ g; // result is an int
 
    cout << "The result is: " << result << endl;

    return 0 ;
}