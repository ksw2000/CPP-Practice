// C++ polymorphism means that a call to a member function will cause
// a different function to be executed depending on the type of object that invokes the function

#include<iostream>
using namespace std;

class Shape{
    protected:
        int width, height;
    public:
        Shape(int a = 0, int b = 0){
            width = a;
            height = b;
        }

        /*
            static
        */
        int area(){
            cout << "Parent class area:" << endl;
            return 0;
        }

        /*
            A virtual function is a function in a base class that is declared using the keyword virtual.
            Defining in a base class a virtual function, with another version in a derived class, signals
            to the compiler that we don't want static linkage for this function.
        */
        // pure virtual function
        virtual int area2() = 0;
};

class Rectangle: public Shape{
    public:
        Rectangle(int a=0, int b =0): Shape(a, b){}

        int area(){
            cout << "Rectangle class area:" << endl;
            return width * height;
        }

        int area2(){
            cout << "Rectangle class area (2):" << endl;
            return width * height;
        }
};

class Traiangle: public Shape{
    public:
        Traiangle(int a=0, int b=0): Shape(a, b){}

        int area(){
            cout << "Traiangle class area:" << endl;
            return (width * height) >> 1;
        }

        int area2(){
            cout << "Traiangle class area (2):" << endl;
            return (width * height) >> 1;
        }
};

int main(){
    Shape* shape;
    Rectangle rec(10, 7);
    Traiangle tri(10, 5);
    shape = &rec;
    shape->area();  // Parent class area:

    shape = &tri;
    shape->area();  // Parent class area:

    /*
        The reason for the incorrect output is that the call of the function area()
        is being set once by the compiler as the version defined in the base class.
        This is called static resolution of the function call, or static linkage
        - the function call is fixed before the program is executed.

        This is also sometimes called early binding because the area() function is
        set during the compilation of the program.
    */

    shape = &rec;
    shape->area2();  // Rectangle class area (2):

    shape = &tri;
    shape->area2();  // Traiangle class area (2):

    return 0;
}
