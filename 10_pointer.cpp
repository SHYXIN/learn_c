#include <iostream>

using namespace std;

int main(){
//    string food = "pizza";
//    cout << food;
//    cout << &food;

    string food2 = "Pizza"; // a food variable of type string
    // a pointer variable, with the name ptr, that store the address of food2
    string* ptr = &food2; // Pointer declaration

    cout << food2 << "\n";
    cout << &food2 << "\n";
    // Reference: Output the memory address of food with the pointer
    cout << ptr << "\n";

    // Dereference

    // Dereference: Output the value of food with ht pointer
    cout << *ptr << "\n";


    // Modify the pointer value
    // You can also change the pointer's value. But note that this will
    // also change the value of original variables;

    string food3 = "Pizza";
    string* ptr3 = &food3;

    cout << food3 << "\n";
    cout << &food3 << "\n";
    cout << *ptr3 << "\n";

    *ptr3 = "Hamburger";
    cout << *ptr3 << "\n";
    cout << food3 << "\n";


    return 0;
}
