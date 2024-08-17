#include<iostream>
using namespace std;

int main(){
    int a, b=3;
    const char newline = '\n';
    a = b;
    a+=2;             // equivalent to a=a+2
    cout << a << newline ;

    // int x = ++a;
    int x = a++;
    cout<<x;

    int q = 7==5 ? 4 : 3;     // evaluates to 3, since 7 is not equal to 5.
    int w = 7==5+2 ? 4 : 3;   // evaluates to 4, since 7 is equal to 5+2.
    // int x = condition ? result1(true) : result2(false) ;
    cout << q << newline << w;

    int f = ( (5 == 5) && (3 > 6) ) ; // evaluates to false ( true && false )
    int g = ( (5 == 5) || (3 > 6) ) ; // evaluates to true ( true || false ) 

    a = (b=3, b+2); //would first assign the value 3 to b, and then assign b+2 to variable a. So, at the end, variable a would contain the value 5 while variable b would contain value 3.

    x  = sizeof (char);
    cout<<x;
}