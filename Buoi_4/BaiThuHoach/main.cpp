#include <bits/stdc++.h>

using namespace std;

class Hang
{
protected:
    char maHang[10];
    float donGia;
    int soLuong;
public:
    void nhap(), xuat();
};
void Hang::nhap()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
    cout<<"Nhap don gia: "; cin>>donGia;
    cout<<"Nhap so luong: "; cin>>soLuong;
}
void Hang::xuat()
{
    cout<<setw(10)<<left<<maHang<<setw(10)<<left<<donGia
    <<setw(10)<<left<<soLuong;
}

class HangMayMac : public Hang
{
    char chatLieu[20];
    float sizE;
public:
    void nhap(), xuat();
};
void HangMayMac::nhap()
{
    Hang::nhap();
    cout<<"Nhap chat lieu: "; fflush(stdin); gets(chatLieu);
    cout<<"Nhap size: "; cin>>sizE;
}
void HangMayMac::xuat()
{
    Hang::xuat();
    cout<<setw(20)<<left<<chatLieu<<sizE<<endl;
}
int main()
{
    HangMayMac *a;
    int n;
    cout<<"Nhap so loai hang may mac: "; cin>>n;
    a= new HangMayMac[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        a[i].nhap();
    }
    cout<<"\n\n-----Thong tin hang may mac-----\n";
    cout<<setw(10)<<left<<"Ma hang"<<setw(10)<<left<<"Don gia"
    <<setw(10)<<left<<"So luong"<<setw(20)<<left<<"Chat lieu"<<"Size"<<endl;
    for (int i=0;i<n;i++)
        a[i].xuat();
    return 0;
}
