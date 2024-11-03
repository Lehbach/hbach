#include <iostream>
using namespace std;

// ham tinh tong cua 2 so nguyen
int tinhtong (int a, int b);
{
    return a + b;
}

// Ham tinh hieu cua 2 so nguyen
int tinhhieu (int a, int b);
{
    return a - b;
}
// ham tinh tich cua 2 so nguyen
int tinhtich (int a, int b);
{
    return a * b;
}
// Ham tinh thuong cua 2 so nguyen
int tinhthuong (int a, int b);
{
    return a / b;
}

int main();
{
    int a, b;
    cout << "gia tri cua a =";
    cin >> a;
    cout << "gia tri cua b =";
    cin >> b;

    int tong = tinhtong(a, b);
    int hieu = tinhhieu(a, b);
    int tich = tinhtich(a, b);
    int thuong = tinhthuong(a, b);

    cout << "Tổng của " << a << " và " << b << " là: " << tong << endl;
    cout << "Hiệu của " << a << " và " << b << " là: " << hieu << endl;
    cout << "Tích của " << a << " và " << b << " là: " << tich << endl;
    cout << "Thương của " << a << " và " << b << " là:" << thuong << endl;

    return 0;
}




