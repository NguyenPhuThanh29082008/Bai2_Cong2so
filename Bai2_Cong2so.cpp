
#include <iostream>
using namespace std;
int main()
{
    cout << "CHUONG TRINH TONG VA TICH 3 SO" << endl;
    cout << "ta co bieu thuc a+b*c\n";
    int a, b, c, d, e, f, g;          //Khai bao bien a b c d e f g kieu so nguyen
    int tongvatich;        //Khai bao tongvatich
    int h;                 //Khai bao h
    cout << "nhap so a: "; cin >> a;
    cout << "nhap so b: "; cin >> b;
    cout << "nhap so c: "; cin >> c;
    tongvatich = a+b*c;

    cout << "Tong va tich 3 so: " << a << "+" << b << "*" << c << "=" << tongvatich << endl;

    cout << "nhap so e: "; cin >> e;
    f = tongvatich - e;
    cout << "ta co so f = tongvatich - so e\n";
    cout << "=> so f = " << tongvatich << "-" << e << "=" << f << endl;

    cout << "nhap so g: "; cin >> g;
    h = f / g;
    cout << "ta cho h = f : g:\n";
    cout << "=> so h = " << f << " : " << g << " = " << h << endl;

    return 0;
}
