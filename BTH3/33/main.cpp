#include <bits/stdc++.h>

using namespace std;

class Hang
{
    char maHang[10], tenHang[30];
    float donGia;
public:
    void nhap(), xuat();
};
void Hang::nhap()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
    cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
    cout<<"Nhap don gia: "; cin>>donGia;
}
void Hang::xuat()
{
    cout<<setw(10)<<left<<maHang<<setw(30)<<left<<tenHang<<donGia<<endl;
}

class Phieu
{
    char maPhieu[10];
    Hang *x;
    int n;
public:
    void nhap(), xuat();
};
void Phieu::nhap()
{
    cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
    cout<<"Nhap so mat hang: "; cin>>n;
    x= new Hang[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        x[i].nhap();
    }
}
void Phieu::xuat()
{
    cout<<"\nMa phieu: "<<maPhieu<<endl;
    cout<<setw(10)<<left<<"Ma hang"<<setw(30)<<left<<"Ten hang"<<"Don gia"<<endl;
    for (int i=0;i<n;i++)
        x[i].xuat();

}
int main()
{
    Phieu a;
    cout<<"Nhap thong tin cua phieu: \n";
    a.nhap();
    cout<<"\n------Thong tin cua phieu-------\n";
    a.xuat();
    return 0;
}
