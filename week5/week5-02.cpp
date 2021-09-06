// ให้นักศึกษาเขียนโปรแกรมเพื่อแสดงผลลัพธ์ผลรวมของตัวเลขในแต่ละแถว และแต่ละหลัก (Level 3)
// method 2
#include <iostream>
using namespace std;
 
#define m 10
#define n 10
 
int main()
{
    int i,j;
    
    int arr[m][n]{
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
 
    int sum = 0;
    cout << "\nFinding Sum of each row:\n\n";
 
    // finding the row sum
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
 
            sum = sum + arr[i][j];
        }
 
        // Print the row sum
        cout
            << "Sum of the row "
            << i << " = " << sum
            << endl;
 
        // Reset the sum
        sum = 0;
    }

    cout << "\nFinding Sum of each column:\n\n";
 
    // finding the column sum
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
 
            sum = sum + arr[j][i];
        }
 
        // Print the column sum
        cout
            << "Sum of the column "
            << i << " = " << sum
            << endl;
 
        // Reset the sum
        sum = 0;
    }
    return 0;
}