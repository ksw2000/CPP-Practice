#include<iostream>
#include<exception>
using namespace std;

struct MyException : public exception{
    const char* what() const throw(){
        return "C++ Exception";
    }
};

int main(){
    double z;
    try{
        throw MyException();
    }catch(MyException& error_msg){
        cerr << "MyException caught" << endl;
        cout << error_msg.what() << endl;
    }catch(exception& e){
        // other errors
    }

    return 0;
}
