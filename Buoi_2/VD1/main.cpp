#include <bits/stdc++.h>

using namespace std;

class GIAMDOC
{
    char HOTEN[20], SDT[12];
    int TUOI;
public:
    void NHAP(), XUAT();
};
void GIAMDOC::NHAP()
{
    fflush(stdin);
    cout<<"Nhap ho ten giam doc: ";
    gets(HOTEN);
    cout<<"Nhap tuoi: ";
    cin>>TUOI;
    fflush(stdin);
    cout<<"Nhap sdt: ";
    gets(SDT);
}
void GIAMDOC::XUAT()
{
    cout<<setw(25)<<left<<HOTEN;
    cout<<setw(7)<<left<<TUOI;
    cout<<SDT;
}
class CONGTY
{
    char TENCT[20], DIACHI[30];
    GIAMDOC X;
public:
    void NHAP(), XUAT();
};
void CONGTY::NHAP()
{
    fflush(stdin);
    cout<<"Nhap ten cong ty: ";
    gets(TENCT);
    cout<<"Nhap dia chi cong ty: ";
    gets(DIACHI);
    X.NHAP();
}
void CONGTY::XUAT()
{
    cout<<setw(25)<<left<<TENCT;
    cout<<setw(35)<<left<<DIACHI;
    X.XUAT();
}
void title()
{
    cout<<setw(25)<<left<<"Ten c.ty";
    cout<<setw(35)<<left<<"Dia chi";
    cout<<setw(25)<<left<<"Ho ten g.doc";
    cout<<setw(7)<<left<<"Tuoi";
    cout<<"SDT\n";
}
int main()
{
    CONGTY a;
    a.NHAP();
    title();
    a.XUAT();
    return 0;
}
