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
        "None ",      // Monday (index 1)
        "Medication ",// Tuesday (index 2)
        "None ",      // Wednesday (index 3)
        "Vitamin ",   // Thursday (index 4)
        "Medication ",// Friday (index 5)
        "None"  };

        // check size of array
        cout<< "1. SIZE:  "<<pillSchedule.size()<<endl;

        //range loop to access elements
        cout << "2. Pills ";
        for(string pill: pillSchedule) cout << pill <<" ";cout<<endl;

        //accessing individual elements
        cout << "3. Elemet 2: " << pillSchedule.at(2) <<endl;
        cout << "4. Element 2: "<< pillSchedule[2] <<endl;
        cout << "5. Front: "   <<  pillSchedule.front() <<endl;
        cout << "6. Back: " <<pillSchedule.back() << endl;
        cout << "7. Empty? " << (pillSchedule.empty() == 0? "False:" : "True")<<endl;
        cout << "8. Address? " <<pillSchedule.data()<<endl;

        
    return 0;
}
