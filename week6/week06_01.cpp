#include <iostream>
using namespace std;
int swap(int *x, int *y);
// prime number
// รับจำนวนเต็ม 2 จำนวนแล้ง แสดงผลจำนวนเฉพาะ ที่มีค่าใรช่วงของตัวเลขที่รับเข้ามา
int main()
{
    int a, b, n;
    cout << "Enter 2 positive numbers : ";
    cin >> a >> b;
    //swap if b < a
    if (b < a)
    swap(&a, &b);

    cout << "Prime Numbers in the range of " << a <<  " to " << b << " are ";

    int total = 0;

    for(int i = a; i <= b; i++)
    {
        n = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j == 0)
            {
                n++;
            }

        }
        if(n == 2)
        {
            cout << i << " ";
            total ++;
        }
    }
    return 0;
}

int swap(int *x, int *y)
{   
    //swap max to b;
    int temp;
    if (*x > *y)
        temp = *x;
        *x = *y;
        *y = temp;
}

