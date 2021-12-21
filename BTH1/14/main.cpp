#include<bits/stdc++.h>
using namespace std;

class Sach
{
    char maSach[10], tenSach[30], NXB[30];
    long soTrang;
    float giaTien;
public:
    void nhap(), xuat();
};
void Sach::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma sach: "; gets(maSach);
    cout<<"Nhap ten sach: "; gets(tenSach);
    cout<<"Nhap NXB: "; gets(NXB);
    cout<<"Nhap so trang: "; cin>>soTrang;
    cout<<"Nhap gia tien: "; cin>>giaTien;
    fflush(stdin);
}
void Sach::xuat()
{
    cout<<setw(10)<<left<<maSach;
    cout<<setw(30)<<left<<tenSach;
    cout<<setw(30)<<left<<NXB;
    cout<<setw(10)<<left<<soTrang;
    cout<<giaTien<<endl;
}
int main()
{
    int n;
    cout<<"Nhap so luong cuon sach: "; cin>>n;
    Sach *a= new Sach[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<"\n";
        a[i].nhap();
    }
    cout<<"\n-----Thong tin cac cuon sach-----\n";
    cout<<setw(10)<<left<<"Ma sach";
    cout<<setw(30)<<left<<"Ten sach";
    cout<<setw(30)<<left<<"NXB";
    cout<<setw(10)<<left<<"So trang";
    cout<<"Gia tien"<<endl;
    for (int i=0;i<n;i++)
        a[i].xuat();
    return 0;
}
