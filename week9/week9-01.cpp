#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
// จงเขียนโปรแกรม Copy ไฟล์ข้อมูลโดยให้นักศึกษาป้อนข้อมูลของไฟล์ต้นทาง และข้อมูลไฟล์ปลายทาง (Level 4)
// Input : c:\temp\data1.txt
// Output : d:\temp\data2.txt

string copied;

void readorigin(string filepath)
{
    ifstream A(filepath.c_str());
    if(A)
    {
        stringstream ss;
        ss << A.rdbuf();
        copied = ss.str();
        cout << "Access origin file success!" << endl;
        A.close();
    }
    else{
        cout << "Failed to access file !";
    }
}
void destination(string copiedpath)
{
    ofstream B(copiedpath.c_str());
    if(B)
    {
        B << copied;
        cout << "Copy file success!";
        B.close();
    }
    else {
         cout << "Failed to access copy file  !";       
    }
}

int main ()
{
    string data1, data2;
    cout << "Input : ";
    getline (cin, data1);
    cout << "Output : ";
    getline (cin, data2);

    readorigin(data1);
    destination(data2);
    return 0;
}