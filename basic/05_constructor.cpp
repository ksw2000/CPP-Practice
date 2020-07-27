#include<iostream>
#include<string>
using namespace std;
class Car{
    // By default, all members of a class is private if you don't specify an access specifier:
    public:
        string brand;
        string model;
        int year;
        Car(string x,string y, int z){
            brand = x;
            model = y;
            year = z;
        }
};

//--------------------------------------
class Car2{
    public:
        string brand;
        string model;
        int year;
        Car2(string x, string y, int z); //建構元前方不用宣告形態
};

Car2 :: Car2(string x, string y, int z){
    brand=x;
    model=y;
    year=z;
}

//利用 :: 再物件外描術他的建構元
//--------------------------------------
int main(){
    Car c("BMW", "X5", 1999);
    Car c2("Ford", "Mustang", 1969);
    cout << c.brand << " " << c.model << " " << c.year <<"\n";
    cout << c2.brand << " " << c2.model << " " << c2.year <<"\n";

    return 0;
}
