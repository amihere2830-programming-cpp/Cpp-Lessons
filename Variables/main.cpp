// This brings in the iostream
#include <iostream>

using namespace std;

int main(){

    int elephant_count;
    int lion_count {};   // Braced Initialization
    int dog_count{10};
    int cat_count{105};
    int domesticated_animals{elephant_count + lion_count + dog_count + cat_count};
    int some_count (2.9);      //Functional Initialization

    cout << "elephant_count: " << elephant_count << ", lion_count: " << lion_count 
        << ", dog_count: " << dog_count << ", cat_count: " << cat_count 
        << ", domesticated_animals: " << domesticated_animals << endl;

    cout << "Error of some_count (2.9)= " << 2.9 - some_count << endl;

    return 0 ;
}