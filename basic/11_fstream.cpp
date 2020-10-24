#include<iostream>
#include<fstream>
using namespace std;
/*
    the predefined object cout is an instance of "ostream" class
    the cout object is said to be "connected to" the stdandard output device.
*/
int main(){
    char data[128];
    ofstream outfile;
    outfile.open("foo.txt", ios::out);
    cout << "writing to the file" << endl;
    cout << "enter your name:";
    cin.getline(data, 100);

    // write inputted data into the file
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    // again write inputted data into the file
    outfile << data << endl;
    outfile.close();
    /*
        When a C++ program terminates it automatically flushes all the streams, release all the allocated
        memory and close all the opended files. But it is always a good practice that a programmer should
        close all the opened files before program termination.
    */

    //-----------------------------------------

    // open a file in read mode
    ifstream infile;
    infile.open("foo.txt");

    cout << "Reading form the file" << endl;
    while(infile >> data){
        cout << data << endl;
    }

    infile.close();
    return 0;
}
/*
flag 說明
ios::in         輸入(讀取)
ios::out        輸出(寫入)
ios::ate        從檔案結尾讀寫
ios::app        從檔案結尾加入
ios::trunc      如果檔案存在，就清除檔案內容的資料
ios::nocreat    開啟檔案時，檔案不存在產生錯誤
ios::noreplace  開啟檔案時，檔案已經存在，且 ate 與 app 為被設定，則產生錯誤
ios::binary     以二進位模式開啟檔案，預設的檔案的模式為文字模式
*/
