#include <iostream>
using namespace std;
// จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
// วิธีที่ 2
int main() {
    double x, y, a;
    cout << "Enter 2 numbers : ";
    cin >> x >> y;
    for(int i=1; i<=4; i++){
        if(i==1){
            a=x+y;
            cout << x << " + " << y << " = " << a << endl;
        }
        if(i==2){
            a=x-y;
            cout << x << " - " << y << " = " << a << endl;
        }
        if(i==3){
            a=x*y;
            cout << x << " x " << y << " = " << a << endl;
        }
        if(i==4){
            a=x/y;
            cout << x << " / " << y << " = " << a << endl;
        }
    }
    return 0;
}
