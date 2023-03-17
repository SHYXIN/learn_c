#include <iostream>
using namespace std;

int main(){
    // type variableName = value;

    int myNum = 15;
    cout << myNum<< endl;

    myNum = 20;  // now myNum is 20;
    cout << myNum<< endl;

    // other type
    int myNum2 = 5;   // Integer (whole number without decimals)
    double myFloatNum = 5.99; // Floating point number (with decimals)
    char myLetter = 'D';    // Character
    string myText = "Hello";  // String (text)
    bool myBoolean = true;  // Boolean (true of false)

    cout << myNum2 <<endl;
    cout << myFloatNum<< endl;
    cout << myLetter<< endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    int myAge = 35;
    cout << "I am " << myAge << " years old.\n"; // 可以连接

    // add variables together

    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << endl;

    // declare many variables
    // to declare more than one variables of the same type,use a comma-separated list:
    int x2 =5 ,y2 = 6, z2 =50;
    cout << x2 + y2 + z2 << endl;
    // one value to multiple variables
    int x3, y3, z3;
    x3 = y3 = z3= 50;
    cout << x3 + y3 + z3<<endl;

    // identifier

    // Good
    int minutePerHour = 60;

    // OK
    int m = 60;

    // constant means unchangeable and read-only;
    const int myNum3 = 15;
//    myNum3 = 12;

    const float PI = 3.14;




    return 0;
}
