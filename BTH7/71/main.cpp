#include <bits/stdc++.h>

using namespace std;

class NSX
{
    char tenNSX[30], diaChi[50];
public:
    void nhap(), xuat();
    friend class Hang;
};
void NSX::nhap()
{
    cout<<"Nhap ten NSX: "; fflush(stdin); gets(tenNSX);
    cout<<"Nhap dia chi NSX: "; fflush(stdin); gets(diaChi);
}
void NSX::xuat()
{
    cout<<" - Ten NSX: "<<tenNSX<<endl;
    cout<<" - Dia chi: "<<diaChi<<endl;
}

class Hang
{
protected:
    char tenHang[30];
    NSX x;
    float donGia;
public:
    void nhap(), xuat();
    Hang();
};
Hang::Hang()
{
    strcpy(tenHang,"");
    donGia=0;
    strcpy(x.diaChi,"");
    strcpy(x.tenNSX,"");
}
void Hang::nhap()
{
    cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
    x.nhap();
    cout<<"Nhap don gia: "; cin>>donGia;
}
void Hang::xuat()
{
    cout<<" - Ten hang: "<<tenHang<<endl;
    x.xuat();
    cout<<" - Don gia: "<<donGia<<endl;
}

class Date
{
    int d, m, y;
public:
    void nhap(), xuat();
    friend class Tivi;
};
void Date::nhap()
{
    cout<<"Nhap ngay: "; cin>>d;
    cout<<"Nhap thang: "; cin>>m;
    cout<<"Nhap nam: "; cin>>y;
}
void Date::xuat()
{
    cout<<d<<"-"<<m<<"-"<<y;
}

class Tivi : public Hang
{
    float kichThuoc;
    Date ngayNhap;
public:
    void nhap(), xuat();
    Tivi();
};
Tivi::Tivi():Hang()
{
    kichThuoc=0;
    ngayNhap.d=0;
    ngayNhap.m=0;
    ngayNhap.y=0;
}
void Tivi::nhap()
{
    Hang::nhap();
    cout<<"Nhap kich thuoc: "; cin>>kichThuoc;
    ngayNhap.nhap();
}
void Tivi::xuat()
{
    Hang::xuat();
    cout<<" - Kich thuoc: "<<kichThuoc<<endl;
    cout<<" - Ngay nhap: ";ngayNhap.xuat(); cout<<endl;
}
int main()
{
    Tivi a;
    cout<<"--Nhap thong tin tivi: \n";
    a.nhap();
    cout<<"\n--Thong tin tivi vua nhap--\n";
    a.xuat();
    return 0;
}
