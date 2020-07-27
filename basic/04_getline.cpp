#include<iostream>
#include<string>
using namespace std;
int main(){
    string getlineString;
    cout << "input string including space\n";
    getline(cin, getlineString);
    cout << getlineString;
    return 0;
}
