
#include <iostream>
using namespace std;

int main() {
    //  int a = 46 ;
    //  float mynumber = 3.56;
    //  cout<<a <<" " <<mynumber;

    // declaring variables:
        int a, b;
        int result;
        int y(0); // constructor initialization [type identifier (initial_value)];
        int b{1}; // uniform initialization
        // process:
        a = 5;
        b = 2;
        a = a + 1;
        result = a - b;

        int foo = 0;
        auto bar = foo;  // the same as: int bar = foo; 
        // When a new variable is initialized, the compiler can figure out what the type of the variable is automatically by the initializer. For this, it suffices to use auto as the type specifier for the variable
        // Here, bar is declared as having an auto type; therefore, the type of bar is the type of the value used to initialize it: in this case it uses the type of foo, which is int.


        int too = 0;
        // Variables that are not initialized can also make use of type deduction with the decltype specifier:
        decltype(too) car;  // the same as: int car; 

        // print out the result:
        cout << result;

        string mystring = "This is a string";
        string mystring ("This is a string");
        string mystring {"This is a string"};

        // terminate the program:
        return 0;
}