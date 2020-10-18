#include<iostream>
using namespace std;
/*
    Reference vs Pointers
    1. Reference is none NULL
    2. Once a reference is intitialized to an object, it cannot be changed to another object.
    3. A reference must be intitialized when it is created
*/

int main(){
    int i;
    int& r = i;
    i = 5;
    cout << "Value of i:\t\t" << i << endl;
    cout << "Value of reference:\t" << r << endl;
    i = 10;
    cout << "Value of i:\t\t" << i << endl;
    cout << "Value of reference:\t" << r << endl;
}
