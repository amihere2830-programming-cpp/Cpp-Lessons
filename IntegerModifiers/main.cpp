// This brings in the iostream
#include <iostream>

using namespace std;

int main(){

    int x {5};
    int y {-10};

    unsigned int z{90};

    short int a = {5453};
    long int b = {564456};
    long long int c ={7564878};

    cout << "short int a = {5453}= " << sizeof(a) << " bytes" << endl;
    cout << "int x {5}= " << sizeof(x) << " bytes" << endl;
    cout << "int y {5453}= " << sizeof(y) << " bytes" << endl;
    cout << "unsigned int z{90}= " << sizeof(z) << " bytes" << endl;
    cout << "long int b = {564456}= " << sizeof(b) << " bytes" << endl;
    cout << "long long int c ={7564878}= " << sizeof(c) << " bytes" << endl;

    return 0 ;
}