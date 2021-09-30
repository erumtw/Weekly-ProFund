#include <iostream>
using namespace std;
//จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)

int main ()
{
    char s[100];
    char *p;
    cout << "Input : ";
    cin >> s;
    p = s;
    cout << "Output : ";
    while (*p != '\0')
        p++;
    while(p != &s[0])    
    {
        p--;
        cout << *p;
    }
    return 0;
}