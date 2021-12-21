#include <bits/stdc++.h>

using namespace std;
class Hang
{
    char maHang[20], tenHang[30];
    float donGia;
public:
    friend istream& operator>>(istream& in, Hang &a);
    friend ostream& operator<<(ostream& out, Hang a);
};
istream& operator>>(istream& in, Hang &a)
{
    cout<<"Nhap ma hang: "; fflush(stdin); in.getline(a.maHang,20);
    cout<<"Nhap ten hang: "; fflush(stdin); in.getline(a.tenHang, 30);
    cout<<"Nhap don gia: "; in>>a.donGia; in.ignore();
    return in;
}
ostream& operator<<(ostream& out, Hang a)
{
    out<<setw(10)<<a.maHang<<setw(20)<<a.tenHang<<setw(10)<<a.donGia<<endl;
    return out;
}
int main()
{
    Hang a;
    cin>>a;
    cout<<a;
    return 0;
}
