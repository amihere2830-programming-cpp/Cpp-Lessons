// This brings in the iostream
#include <iostream>
#include <iomanip>  // use to set precision at standard output stream
#include <string>
#include <algorithm>

using namespace std;

void performOperation(string str, int number1, int number2){
    
    if ((str.empty()) != true){
        int result;
        string s;
        transform(str.begin(), str.end(), std::back_inserter(s), ::tolower);

        if(s=="addition"){
            cout <<"--------Addition------"<<endl;
            result = number1 + number2;
            cout << "\t" << number1 <<" + " << number2 <<"= " << result << endl;
        }else if (s=="multiplication"){
            cout<<"\n--------Multiplication------"<<endl;
            result = number1 * number2;
            cout << "\t" << number1 <<" x " << number2 <<"= " << result << endl;

        }else if (s=="division"){
            cout<<"\n--------Division------"<<endl;
            if (number2 != 0){
                result = number1 / number2;
                cout << "\t" << number1 <<"/" << number2 <<"= " << result << endl;
            }else{
                cout << "You are dividing a number by zero" << endl;
                cout << "Your numbers are: "<< number1 << " and " << number2 << endl;
            }

        }else if (s=="modulo"){
            cout<<"\n--------Modulo------"<<endl;
            result = number1 % number2;
            cout << "\t" << number1 <<"%" << number2 <<"= " << result << endl;
        }else if (s=="subtract"){
            cout<<"\n--------Subtraction------"<<endl;
            result = number1 - number2;
            cout << "\t" << number1 <<" - " << number2 <<"= " << result << endl;
        }

    }else{
        cout << "Enter operation type" << endl;
    }
    
}

int main(){

    int number1{31};
    int number2{0};

    // Addition
    performOperation("Addition", number1, number2);

    // Subtraction
    performOperation("Subtraction", number1, number2);

    // Multiplication
    performOperation("Multiplication", number1, number2);

    // Division
    performOperation("Division", number1, number2);

    // Modulo
    performOperation("Modulo", number1, number2);
    return 0 ;
}