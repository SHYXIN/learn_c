#include <iostream>
using namespace std;


class MyClass{
public:
    int x;      // public attribute
private:
    int y       // private attribute

};

class MyClass{
    int x;      // private attribute
    int y;      // private attribute

};


int main(){
    // public           members are accessible from outside the class
    // private default  members cannot be accessed (or viewed ) from outside the class
    // protected        members cannot be accessed from outside the class,however, they
    //                  can accessed in inherited classes.


    return 0;
}
