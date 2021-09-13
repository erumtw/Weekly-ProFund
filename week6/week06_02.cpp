#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
// รับจำนวนเต็ม 2 จำนวนแล้ง แสดงผลจำนวนเฉพาะ ที่มีค่าใรช่วงของตัวเลขที่รับเข้ามา
int main()
{   
    int a, b, n;
    cout << "Enter 2 positive numbers : ";
    cin >> a >> b;
    cout << "Prime Numbers in the range of " << min(a,b) <<  " to " << max(a,b) << " are ";

    for(int i = min(a,b); i <= max(a,b); ++i) 
    {   
        int ctr=0; 
        for(int j = 2 ; j <= sqrt(i); ++j) 
        {   if(i%j==0)
                ctr=1; 
        }
        if (i != 1)
        {
            if(ctr==0) 
                cout<<i<<" ";
        }
        
    }
    return 0;
}
