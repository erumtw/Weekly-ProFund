#include<iostream>
#include <algorithm>
using namespace std;

//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
//วิธีที่ 2
double findmin (double n[],double min)
{
    min = n[0];
    for (int i=0; i < 3; i++)
    {
        if(n[i] < min)
        {
            min = n[i];        
        } 
    }

    return min;
}

double findmax (double n[],double max)
{
    max = n[0];
    for (int i=0; i < 3; i++)
    {
        if(n[i] > max)
        {
            max = n[i];        
        } 
    }

    return max;
}

double findmin2 (double n[],double min, double max, double min2)
{
    min2 = n[0];
    findmin(n,min);
    findmax(n,max);
    for (int i=0; i < 3; i++)
    {
        if(n[i] > min && n[i] < max)
        {
            min2 = n[i];        
        } 
    }
    return min2;
}

int main () 
{   double max, min, min2;
    double n[3];
    cout << endl;
    for(int i=0; i < 3; i++)
    {
        cout << "enter number : ";
        cin >> n[i];
    }

    min = findmin(n,min);
    max = findmax(n,max);
    cout << "Minimum number is : " << min << endl;
    cout << "Maximum number is : " << max << endl;
    
    min2 = findmin2(n,min,max,min2);
    cout << "2ndMinimum number is : " << min2 << endl;
    cout << "Sum of minimum with 2nd minimum number is : " << min2+min << endl;

    return 0;
}


