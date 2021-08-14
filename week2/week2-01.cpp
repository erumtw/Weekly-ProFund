#include <iostream>
using namespace std;
//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
//วิธีที่1

int main() {
    double x,y;
    cout << "Enter 2 numbers : ";
    cin >> x >> y;
        cout << x << " + " << y << " = "<< x+y << endl;
        cout << x << " - " << y << " = "<< x-y << endl;
        cout << x << " x " << y << " = "<< x*y << endl;
        cout << x << " / " << y << " = "<< x/y << endl;
    return 0;
}