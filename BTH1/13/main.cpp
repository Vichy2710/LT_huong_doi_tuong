#include<bits/stdc++.h>
using namespace std;

class Hang
{
    char maHang[10], tenHang[30];
    float donGia;
    int soLuong;
public:
    void nhap(), xuat();
};
void Hang::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma hang: "; gets(maHang);
    cout<<"Nhap ten hang: "; gets(tenHang);
    cout<<"Nhap don gia: "; cin>>donGia;
    cout<<"Nhap so luong: "; cin>>soLuong;
    fflush(stdin);
}
void Hang::xuat()
{
    cout<<setw(10)<<left<<maHang;
    cout<<setw(30)<<left<<tenHang;
    cout<<setw(10)<<left<<donGia;
    cout<<setw(10)<<left<<soLuong;
    cout<<donGia*soLuong<<endl;
}

int main()
{
    int n;
    cout<<"Nhap so mat hang: "; cin>>n;
    Hang *a= new Hang[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        a[i].nhap();
    }
    cout<<"\n-----------\n";
    cout<<setw(10)<<left<<"Ma hang";
    cout<<setw(30)<<left<<"Ten hang";
    cout<<setw(10)<<left<<"Don gia";
    cout<<setw(10)<<left<<"So luong";
    cout<<"Thanh tien"<<endl;
    for (int i=0;i<n;i++)
        a[i].xuat();
    return 0;
}
