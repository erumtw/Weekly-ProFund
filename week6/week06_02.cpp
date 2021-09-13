#include <iostream>
#include<cmath>
#include <algorithm>
using namespace std;
// รับจำนวนเต็ม 2 จำนวนแล้ง แสดงผลจำนวนเฉพาะ ที่มีค่าใรช่วงของตัวเลขที่รับเข้ามา
int main()
{   
    int a, b, n;
    cout << "Enter 2 positive numbers : ";
    cin >> a >> b;
    cout << "Prime Numbers in the range of " << min(a,b) <<  " to " << max(a,b) << " are ";

    for(int i = min(a,b); i <= max(a,b); ++i) //loop to check for each number in the range
    {   
        int ctr=0; //to maintain factor count
        for(int j = 2 ; j <= sqrt(i); ++j) //checking for factors
        {   if(i%j==0)
                ctr=1; //increasing factor count when found
        }
        if (i != 1)
        {
            if(ctr==0) //checking and printing prime numbers
                cout<<i<<" ";
        }
        
    }
    return 0;
}
