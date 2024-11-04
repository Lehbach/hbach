#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "nhap vao cac so:";
    cin >> a;
    if ((a = 1))
    cout << "ban la gioi tinh nam";
    if ((a = 0))
    cout << "ban la gioi tinh nu";
    if (a < 0)
    cout << "moi ban nhap lai";
    if (a > 1)
    cout << "chua xac dinh";

}