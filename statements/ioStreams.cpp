
// This brings in the iostream
#include <iostream>
// This brings in the fstream for file handling
#include <fstream>


using namespace std;

consteval int get_value(){
    return 3;
}

int main(){

   cout << "Writing to file" << endl;
   ofstream myFile;

    myFile.open("output.txt");
    myFile << "Hello, world!" << endl;
    myFile.close();

    return 0;
}