#include <iostream>
#include <algorithm>

using namespace std;
//void values(int);
int A,B,C;

void values(unsigned int v[])
{
    A = v[0];
    B = v[0];
    C = v[0];
    for (int i = 0; i < 3; i++) // find min(A)
    {
        if ( v[i] < A )
        {
            A = v[i];            
        }

        if ( v[i] > C )
        {
            C = v[i];            
        }
    }
     for (int i = 0; i < 3; i++)  // find mid(B)
    {
        if ( v[i] > A && v[i] < C)
        {
            B = v[i];            
        }
    }
}

int main ()
{
    unsigned int x,y,z;
    cout << "Enter 3 Number (each must less than 101) : ";
    cin >> x >> y >> z;
    unsigned int num[3] {x,y,z};
    if( x > 100 || y > 100 || z > 100)
    {
        cout << "Each number cannot exceed 100.";
    }
    else
    {
        cout << "Sort Order : ";
        string sort;
        cin >> sort;
        values(num);
        cout << "Sorted : ";                                       
        if(sort == "ABC" )
            cout << A << " " << B << " " << C;                          
        else if (sort == "ACB")  
            cout << A << " " << C << " " << B;
        else if (sort == "BAC")    
            cout << B << " " << A << " " << C;
        else if (sort == "BCA")
            cout << B << " " << C << " " << A;
        else if (sort == "CAB") 
            cout << C << " " << A << " " << B;
        else if (sort == "CBA")  
            cout << C << " " << B << " " << A;
        else   
            cout << "ERROR" << endl;
    }
    return 0;
}

