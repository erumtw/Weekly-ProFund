#include <iostream>
#include <string>
using namespace std;
//จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)

int main ()
{
    string s;
    cout << "Input : ";
    cin >> s;
    cout << "Output : ";
    for(int i = s.size()-1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}