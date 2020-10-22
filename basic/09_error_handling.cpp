#include<iostream>
using namespace std;

double division(int a, int b){
    if(b == 0){
        throw "Division by zero condition!";
    }
    return a / b;
}

int main(){
    double z;
    try{
        z = division(20, 0);
    }catch(const char* error_msg){
        cerr << error_msg << endl;
    }

    return 0;
}
