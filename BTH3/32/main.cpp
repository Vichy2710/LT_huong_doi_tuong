#include <bits/stdc++.h>

using namespace std;

class NSX
{
    char maNSX[10], tenNSX[30], dcNSX[50];
public:
    void nhap(), xuat();
};
void NSX::nhap()
{
    cout<<"Nhap ma NSX: "; fflush(stdin); gets(maNSX);
    cout<<"Nhap ten NSX: "; fflush(stdin); gets(tenNSX);
    cout<<"Nhap dia chi NSX: "; fflush(stdin); gets(dcNSX);

}
void NSX::xuat()
{
    cout<<setw(10)<<left<<maNSX<<setw(30)<<left<<tenNSX<<dcNSX<<endl;
}
class Hang
{
    char maHang[10], tenHang[30];
    NSX x;
public:
    void nhap(), xuat();
};
void Hang::nhap()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
    cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
    x.nhap();
}
void Hang::xuat()
{
    cout<<setw(10)<<left<<maHang<<setw(30)<<left<<tenHang;
    x.xuat();
}
int main()
{
    Hang a;
    cout<<"Nhap thong tin mat hang: \n";
    a.nhap();
    cout<<"\n-----Thong tin mat hang vua nhap:-----\n";
    cout<<setw(10)<<left<<"Ma hang"<<setw(30)<<left<<"Ten hang"
    <<setw(10)<<left<<"Ma NSX"<<setw(30)<<left<<"Ten NSX"<<"Dia chi NSX"<<endl;
    a.xuat();
    return 0;
}
