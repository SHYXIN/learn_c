#include <iostream>
using namespace std;


int main(){
    // Create a structure variable called myStructure
    struct {          // Structure declaration
        int myNum;    // Member (int variable)
        string myString; // Member (string variable)
    } myStructure;          // Structure variable

    // Assign values to members of myStructure
    myStructure.myNum =1;
    myStructure.myString = "Hello world";

    // print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";


    // one Structure in Multiple Variables
    struct {
        string brand;
        string model;
        int year;
    }myCar1, myCar2; // we can add variables by separating them with a comma here;

    // put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;


    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // print the structure members
    cout << myCar1.brand << " " << myCar1.model <<" "<< myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model <<" "<< myCar2.year << "\n";

    // named Structures
    // This structure is named myDataType
    struct myDataType{
        int myNum;
        string myString;
    };

    myDataType myVar;


    return 0;
}
