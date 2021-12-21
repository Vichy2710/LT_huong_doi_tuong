#include <bits/stdc++.h>

using namespace std;

class Date
{
    int d, m, y;
public:
    void nhap(), xuat();
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

class NhanSu
{
    char maNS[10], hoTen[30];
    Date NS;
public:
    void nhap(), xuat();
};
void NhanSu::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma nhan su: "; gets(maNS);
    fflush(stdin);
    cout<<"Nhap ho ten: "; gets(hoTen);
    NS.nhap();
}
void NhanSu::xuat()
{
    cout<<setw(10)<<left<<maNS<<setw(30)<<left<<hoTen;
    NS.xuat();
    cout<<endl;
}
int main()
{
    NhanSu x;
    x.nhap();
    cout<<"\nThong tin nhan su: \n";
    cout<<setw(10)<<left<<"Ma NS"<<setw(30)<<left<<"Ho ten"<<"Ngay sinh\n";
    x.xuat();
    return 0;
}
