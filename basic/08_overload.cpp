#include<iostream>
using namespace std;

class PrintData{
    /*
        C++'s Overload is like Java's overload
    */
    public:
        void print(int i){
            cout << "print int" << i << endl;
        }

        void print(double i){
            cout << "print double" << i << endl;
        }
};


/*
    We can redefine or overload most of built-in operators available in C++.
    The, a programmer can use operators with user-defined types as well.
*/

class Box{
    public:
        double getVolume(void){
            return length * breadth * height;
        }

        void setLength(double len){
            length = len;
        }

        void setBreadth(double bre){
            breadth = bre;
        }

        void setHeight(double hei){
            height = hei;
        }

        Box operator+(const Box& b){
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        }
    private:
        double length;
        double breadth;
        double height;
};

int main(){
    PrintData p;
    p.print(2);
    p.print(2.0);

    Box Box1;
    Box Box2;
    Box Box3;

    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    Box3 = Box1 + Box2;

    double volumn = Box3.getVolume();
    cout << "Volumn of Box3: " << volumn << endl;

}
