#include <iostream>
using namespace std;

int main()
{
    int tuoi;
    cout << "nhap tuoi cua ban:";
    cin >> tuoi;
    if (tuoi >= 0 && tuoi <=6)
    cout << "em be";
    else if (tuoi >= 7 && tuoi <= 12)
    cout << "tre em";
    else if (tuoi >= 13 && tuoi <= 18)
    cout << "vi thanh nien";
    else if (tuoi >= 19 && tuoi <=34)
    cout << "truong thanh";
    else if (tuoi >= 35 && tuoi <= 45)
    cout << "trung nien";
    else if (tuoi >= 46 && tuoi <= 65)
    cout << "qua tuoi trung nien";
    else if (tuoi >= 66 && tuoi <= 100)
    cout << "nguoi gia";
    else 
    cout << "ban da nhap sai so tuoi";

}