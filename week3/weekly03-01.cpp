#include<iostream> 
using namespace std;

//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
//วิธีที่ 1

int main () 
{
    double a,b,c;
    cout << "enter 1st number : ";
    cin >> a;
    cout << "enter 2nd number : ";
    cin >> b;
    cout << "enter 3th number : ";
    cin >> c;
    cout << endl;
    double s[] = {a, b, c};
    
    int size = sizeof(s) / sizeof(s[0]);
    // cout << "size of array : " << size << endl;

    double min = s[0];
    double min2 = s[0];
    double max = s[0];

    for (int i = 0; i < size; i++) // find minutest
    {
        if ( s[i] < min )
        {
            min = s[i];            
        }

        if ( s[i] > max )
        {
            max = s[i];            
        }
    }
     for (int i = 0; i < size; i++)  // find 2nd minutest
    {
        if ( s[i] > min && s[i]<max)
        {
            min2 = s[i];            
        }
    }
    cout << "Min number is : " << min << endl;
    cout << "Second min number is : " << min2 << endl;
    cout << "Max number is : " << max << endl;
    cout << "Sum of Min & 2nd min number is : " << min2+min << endl;
    return 0;
}