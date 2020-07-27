#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1, str2, str3;
    str1 = "Hello ";
    str2 = "C++";
    str3 = str1 + str2; // 在c++中，字串可以直接相加
    cout << str3;
    cout << "\n字串長度：" << str3.length();
    cout << "\n字串第一個字：" << str3[0];
    return 0;
}
