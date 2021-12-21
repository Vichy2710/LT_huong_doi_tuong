#include <bits/stdc++.h>

using namespace std;

class NSX
{
    char maNSX[30], tenNSX[30], dcNSX[40];
//public:
    friend class Hang;
};

class Hang
{
    char maHang[30], tenHang[30];
    float donGia, trongLuong;
    NSX x;
public:
    void nhap();
    void xuat();
};
void Hang::nhap()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
    cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
    cout<<"Nhap don gia: "; cin>>donGia;
    cout<<"Nhap trong luong: "; cin>>trongLuong;
    cout<<"Nhap ma NSX: "; fflush(stdin); gets(x.maNSX);
    cout<<"Nhap ten NSX: "; fflush(stdin); gets(x.tenNSX);
    cout<<"Nhap dia chi NSX: "; fflush(stdin); gets(x.dcNSX);
}
void Hang::xuat()
{
    cout<<"- Ma hang: "<<maHang<<endl;
    cout<<"- Ten hang: "<<tenHang<<endl;
    cout<<"- Don gia: "<<donGia<<endl;
    cout<<"- Trong luong: "<<trongLuong<<endl;
    cout<<"- Ma NSX: "<<x.maNSX<<endl;
    cout<<"- Ten NSX: "<<x.tenNSX<<endl;
    cout<<"- Dia chi NSX: "<<x.dcNSX<<endl;
}
int main()
{
    Hang a;
    cout<<"Nhap thong tin mat hang: \n";
    a.nhap();
    cout<<"---Thong tin mat hang---\n";
    a.xuat();
    return 0;
}
