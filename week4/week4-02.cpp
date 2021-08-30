#include <iostream>
#include <numeric>
using namespace std;

 /// จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)


double avg(int n, double H[])
{
    double sum = 0;
    return accumulate(H, H+n, sum);
}

int main ()
{
    int n;
    cout << "How many students ? : ";
    cin >> n;
    double H[n];

    for (int i = 0; i < n; i++)
    {   
        cout << "Enter Height (cm) : ";
        cin >> H[i];
    }

    int j = 0;
    cout << "Height of these students are ";
    while (j < n)
    {
        cout << H[j];
        cout << "cm. ";
        j++;
    }
    
    cout << endl << "Average height is "  << avg (n, H) / n << "cm.";
    return 0;
}