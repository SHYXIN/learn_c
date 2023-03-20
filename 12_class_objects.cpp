#include <iostream>
using namespace std;

class MyClass{          // the class
public:                 // Access specifiter
    int myNum;          //Attribute (int variable)
    string myString;    //attribute (string variable)
};

class Car{
public:
    string brand;
    string model;
    int year;
};

int main(){
    MyClass myObj; // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    // cout << myObj;


    // multiple objects
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";


    return 0;
}
