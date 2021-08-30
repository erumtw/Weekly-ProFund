#include <iostream>
using namespace std;
 // จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
 // method 1
int main ()
{   
    int n=10;
    string s[n];
    int c=1;
    for(int i = 0; i < n; i++)  // input height
    {   
        cout << "Enter height of student number " << c <<  " : ";
        cin >> s[i];
        c++;
    }
    
    int j=1;
    for (int i = 0; i < n; i++) // cout height
    {   
            cout << "Height of student number " << j << " = "<< s[i] << endl;
            j++;  
    }
    
    double sum = 0;
    for(int i = 0; i < n; i++) //
    { 
        sum += stod(s[i]); // convert string to double
        
    }
    // cout << sum << endl;
    cout << "The average height is : " << sum / n << endl;
    return 0;
}