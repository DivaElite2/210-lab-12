//comsc 210|Lateefah Camacho| Lab 12
// vs code
#include <iostream>
#include <array>
#include <string>
using namespace std;
//Declare const for values that should not change
const int SIZE = 7;

int main()
{
//declarations
array<string, SIZE >pillSchedule = {
        "Vitamin",   // Sunday (index 0)
        "None",      // Monday (index 1)
        "Medication",// Tuesday (index 2)
        "None",      // Wednesday (index 3)
        "Vitamin",   // Thursday (index 4)
        "Medication",// Friday (index 5)
        "None"  };
        cout<< "1. SIZE:  "<<pillSchedule.size()<<endl;
    return 0;
}
