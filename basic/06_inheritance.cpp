#include<iostream>
#include<string>
using namespace std;
class Parent{
    public:
        void MyFunction(){
            cout << "Parent class\n";
        }
};

class Child: public Parent{

};

class Parent2{
    public:
    void MyFunction2(){
        cout << "Parent2 class\n";
    }
};

// C++允許多重繼承
class Child2: public Parent, public Parent2{
    public:
        Child2(){   // 建構元前方不用宣告形態
            MyFunction();
            MyFunction2();
        }
};

int main(){
    Child c;
    c.MyFunction();
    Child2 d;

    return 0;
}
