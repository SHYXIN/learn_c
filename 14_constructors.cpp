#include <iostream>

using namespace std;

class MyClass{                      // the class

public:                             // Access specifier
    MyClass(){                       // Contructor
        cout << "Hello world!"<< "\n";
    }
};

class Car{                  // the class
public:                     // Access specifier
    string brand;           // attribute
    string model;           // attribute
    int year;               // attribute
    Car(string x, string y, int z){  //constructor with parameters
        brand = x;
        model = y;
        year = z;

    }
};

class Car2{
public :
    string brand;
    string model;
    int year;
    Car2(string x, string y, int z);  // constructor declaration

};

Car2::Car2(string x, string y, int z){
    brand = x;
    model = y;
    year = z;

}


int main(){
    MyClass myObj; // Create an object of MyClass (this will call the constructor)


    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    Car2 carObj3("ÍõöÎ", "wangxin", 1003);

    cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n";


    return 0;
}
