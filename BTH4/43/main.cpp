#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

class Hang;
class Date
{
    int d, m, y;
    friend class Hang;
    friend void filter(Hang *a, int n);
};

class Hang
{
    char maHang[30], tenHang[30];
    Date ngaySX;
public:
    void nhap()
    {
        cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
        cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
        cout<<"Nhap ngay san xuat: \n";
        cout<<"- Ngay: "; cin>>ngaySX.d;
        cout<<"- Thang: "; cin>>ngaySX.m;
        cout<<"- Nam: "; cin>>ngaySX.y;
    }
    void xuat()
    {
        cout<<setw(10)<<left<<maHang<<setw(20)<<left<<tenHang
        <<ngaySX.d<<"-"<<ngaySX.m<<"-"<<ngaySX.y<<endl;
    }
    friend void filter(Hang *a, int n);
};

void filter(Hang *a, int n)
{
    for (int i=0;i<n;i++)
        if(a[i].ngaySX.y==2017)
            a[i].xuat();

}
int main()
{
    Hang *a;
    int n;
    cout<<"Nhap so mat hang: "; cin>>n;
    a= new Hang[n];
    cout<<"Nhap thong tin cac mat hang: \n";
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        a[i].nhap();
    }
    cout<<"\n\n----Thong tin cac mat hang----\n";
    cout<<setw(10)<<left<<"Ma hang"<<setw(20)<<left<<"Ten hang"
        <<"Ngay SX"<<endl;
    for (int i=0;i<n;i++)
        a[i].xuat();
    Sleep(2000);
    cout<<"\n\n----Thong tin cac mat hang nam 2017----\n";
    cout<<setw(10)<<left<<"Ma hang"<<setw(20)<<left<<"Ten hang"
        <<"Ngay SX"<<endl;
    filter(a,n);
    return 0;
}
