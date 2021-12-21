#include <bits/stdc++.h>
#include<unistd.h>
using namespace std;
class Printer
{
protected:
    float trongLuong;
    char hangSX[20];
    int namSX;
    float tocDo;
};

class DotPrinter : public Printer
{
    float matDoKim;
public:
    void nhap(), xuat();
    friend void suaNamSX(DotPrinter &a);
};
void DotPrinter::nhap()
{
    cout<<"Nhap trong luong: "; cin>>trongLuong;
    cout<<"Nhap hang sx: "; fflush(stdin); gets(hangSX);
    cout<<"Nhap nam sx: "; cin>>namSX;
    cout<<"Nhap toc do: "; cin>>tocDo;
    cout<<"Nhap mat do kim: "; cin>>matDoKim;
}
void DotPrinter::xuat()
{
    cout<<"Trong luong: "<<trongLuong<<endl;
    cout<<"Hang sx: "<<hangSX<<endl;
    cout<<"Nam sx: "<<namSX<<endl;
    cout<<"Toc do: "<<tocDo<<endl;
    cout<<"Mat do kim: "<<matDoKim<<endl;
}

class LaserPrinter : public Printer
{
    float doPhanGiai;
public:
    void nhap(), xuat();
    friend void suaNamSX(LaserPrinter &a);
};
void LaserPrinter::nhap()
{
    cout<<"Nhap trong luong: "; cin>>trongLuong;
    cout<<"Nhap hang sx: "; fflush(stdin); gets(hangSX);
    cout<<"Nhap nam sx: "; cin>>namSX;
    cout<<"Nhap toc do: "; cin>>tocDo;
    cout<<"Nhap do phan giai: "; cin>>doPhanGiai;
}
void LaserPrinter::xuat()
{
    cout<<"Trong luong: "<<trongLuong<<endl;
    cout<<"Hang sx: "<<hangSX<<endl;
    cout<<"Nam sx: "<<namSX<<endl;
    cout<<"Toc do: "<<tocDo<<endl;
    cout<<"Do phan giai: "<<doPhanGiai<<endl;
}

void suaNamSX(DotPrinter &a)
{
    a.namSX=2021;
}
void suaNamSX(LaserPrinter &a)
{
    a.namSX=2021;
}
int main()
{
    DotPrinter a;
    cout<<"Nhap thong tin may in kim: \n";
    a.nhap();
    cout<<"Thong tin may in kim: \n";
    a.xuat();

    sleep(2);
    LaserPrinter b;
    cout<<"\n\nNhap thong tin may in Laser: \n";
    b.nhap();
    cout<<"Thong tin may in Laser: \n";
    b.xuat();
    sleep(2);
    suaNamSX(a);
    suaNamSX(b);
    cout<<"\n\nThong tin cac may in sau khi sua: \n";
    a.xuat();
    cout<<endl;
    b.xuat();
    return 0;
}
