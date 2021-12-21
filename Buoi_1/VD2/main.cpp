#include <bits/stdc++.h>

using namespace std;

class Hang
{
    char maHang[5];
    char tenHang[20];
    float donGia;
public:
    void nhap();
    void xuat();
};
void Hang::nhap()
{
    fflush(stdin);
    cout<<"Ma hang: "; cin.getline(maHang,20);
    cout<<"Ten hang: "; cin.getline(tenHang,20);
    cout<<"Don gia: "; cin>>donGia;
    fflush(stdin);
}
void Hang::xuat()
{
    cout<<setw(20)<<maHang<<setw(20)<<tenHang<<setw(15)<<donGia<<endl;

}
int main()
{
    Hang *a;
    int n;
    cout<<"n = "; cin>>n;
    a=new Hang[n];
    for (int i=0; i<n; i++)
        a[i].nhap();
    for (int i=0; i<n; i++)
        a[i].xuat();

    return 0;
}
