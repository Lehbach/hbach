#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "nhap vao cac so:";
    cin >> a;
    if ((a = 1))
    cout << "ban la gioi tinh nam";
    else if ((a = 0))
    cout << "ban la gioi tinh nu";
    else if (a < 0)
    cout << "moi ban nhap lai";
    else if (a > 1)
    cout << "chua xac dinh";

}
