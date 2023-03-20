#include <iostream>
using namespace std;

class MyClass{                      // the class
public:                             // Access specifier
    void myMethod(){                // Method/function defined inside the class
        cout << "Hello world"<<"\n";
    }
};

class MyClass2{             // The class
public:                     // Access specifier
    void myMethod2();       // Method/function declaration
};


// Method/function definition outside the class
void MyClass2::myMethod2(){
    cout << "Hello world2!"<<"\n";
}

class Car{
public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){

    return maxSpeed;
}



int main(){
    MyClass myObj;     // create an object of myClass
    myObj.myMethod();  // call the method

    MyClass2 myObj2;   // Create an object of MyClass2
    myObj2.myMethod2();  // call the method

    return 0;
}
