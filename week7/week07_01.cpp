#include<iostream>
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

void sorting(string n)
{
    for (int j = 0; j < 3; j++)
    {
        // for (int i = 0; i < 3; i++)
        // {
            if (n[j] == 'A')
                cout << A ;
            else if (n[j] == 'B')
                cout << B ;
            else if (n[j] == 'C')
                cout << C ;
        // }
            cout << " ";
    }
}

int main ()
{
    unsigned int x,y,z;
    cout << "Enter 3 Number (each must less than 100) : ";
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
        sorting(sort);
    }
    return 0;
}

