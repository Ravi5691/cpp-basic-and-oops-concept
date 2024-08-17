
#include <iostream>

using namespace std;

// const double pi = 3.14159;
// const char newline = '\n';

#define PI 3.14159
#define NEWLINE '\n'

int main(){
    int a = 5; //The 5 in this piece of code was a literal constant.
    double r=5.0;               // radius
    double circle;

    // circle = 2 * pi * r;
    // cout << circle;
    // cout << newline;

    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;
}
