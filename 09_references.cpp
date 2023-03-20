#include <iostream>
using namespace std;

int main(){
    // creating references
    string food = "Pizza";  // food variable
    string &meal = food;  // reference to food

    cout << food << "\n";
    cout << meal << "\n";

    // memory address

    string food2 = "Pizza";
    cout << &food;  //地址

    return 0;
}
