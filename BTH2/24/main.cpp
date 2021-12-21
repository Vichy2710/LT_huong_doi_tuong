#include <bits/stdc++.h>

using namespace std;

class DoanhNghiep
{
    char ten[40], diaChi[50];
    int soNV;
    float doanhThu;
public:
    void nhap(), xuat();
};
void DoanhNghiep::nhap()
{
    fflush(stdin);
    cout<<"Nhap ten doanh nghiep: "; gets(ten);
    cout<<"Nhap dia chi: "; gets(diaChi);
    cout<<"Nhap so nhan vien: "; cin>>soNV;
    cout<<"Nhap doanh thu: "; cin>>doanhThu;
    fflush(stdin);
}
void DoanhNghiep::xuat()
{
    cout<<setw(40)<<left<<ten<<setw(50)<<left<<diaChi
    <<setw(15)<<left<<soNV<<doanhThu<<endl;
}
int main()
{
    DoanhNghiep *a;
    int n;
    cout<<"Nhap so doanh nghiep: "; cin>>n;
    a= new DoanhNghiep[n];
    cout<<"Nhap thong tin cac doanh nghiep:\n";
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        a[i].nhap();
    }
    cout<<"\n-----Thong tin cac doanh nghiep -----\n\n";
    cout<<setw(40)<<left<<"Ten"<<setw(50)<<left<<"Dia chi"
    <<setw(15)<<left<<"So NV"<<"Doanh thu"<<endl;
    for (int i=0;i<n;i++)
        a[i].xuat();
    return 0;
}
