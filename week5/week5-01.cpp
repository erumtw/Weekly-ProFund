// ให้นักศึกษาเขียนโปรแกรมเพื่อแสดงผลลัพธ์ผลรวมของตัวเลขในแต่ละแถว และแต่ละหลัก (Level 3)
// method 1
#include  <iostream>
using namespace std;

// int sumRows(int);
int sumRows(int a[][10])
{
    for (int i=0; i<10; i++) // rows
    {
        int Sum = 0;
        for(int j=0; j<10; j++) // cols
        {
            Sum += a[i][j];
        }
        cout << "Sum of row " << i+1 << " is " << Sum << endl;
    }
}
int sumCols(int a[][10])
{
    for (int i=0; i<10; i++) // cols
    {
        int Sum = 0;
        for(int j=0; j<10; j++) // rowls
        {
            Sum += a[j][i];
        }
        cout << "Sum of column " << i+1 << " is " << Sum << endl;
    }
}
int main ()
{
    int array[10][10]{
        {95,68,95,42,65,31,42,51,42,68},
        {59,74,21,35,62,14,21,35,26,28},
        {29,24,16,25,42,36,25,16,24,25},
        {32,12,36,24,15,32,16,95,75,85},
        {62,43,19,86,24,37,19,65,53,28},
        {64,29,21,53,24,16,58,75,14,25},
        {35,62,95,86,47,85,78,14,63,29},
        {86,47,68,32,12,36,69,86,74,48},
        {46,26,53,69,78,46,14,21,34,26},
        {38,69,47,28,34,16,24,28,59,68}
    };
    sumRows(array);
    sumCols(array);
}

