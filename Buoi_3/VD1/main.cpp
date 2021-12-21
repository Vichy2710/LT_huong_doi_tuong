#include <bits/stdc++.h>

using namespace std;
class Phieu;
class NhanVien
{
    char hoTen[30], chucVu[30];
public:
    void nhap(), xuat();
};
void NhanVien::nhap()
{
    fflush(stdin);
    cout<<"Nhap ho ten: "; gets(hoTen);
    cout<<"Nhap chuc vu: "; gets(chucVu);
}
void NhanVien::xuat()
{
    cout<<"Nhan vien kiem ke: "<<hoTen;
    cout<<"     Chuc vu: "<<chucVu<<endl;
}
class Phong
{
    char maPhong[15], tenPhong[15] , tenTruongPhong[30];
public:
    void nhap(), xuat();
};
void Phong::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma phong: "; gets(maPhong);
    cout<<"Nhap ten phong: "; gets(tenPhong);
    cout<<"Nhap ten truong phong: "; gets(tenTruongPhong);
}
void Phong::xuat()
{
    cout<<"Kiem ke tai phong: "<<tenPhong;
    cout<<"     Ma phong: "<<maPhong<<endl;
    cout<<"Truong phong: "<<tenTruongPhong<<endl;
}
class TaiSan
{
    char tenTS[30];
    int soLuong;
    char tinhTrang[30];
public:
    void nhap(), xuat();
    friend class Phieu;
    friend void timKiem(Phieu x);
    friend void sapXep(Phieu x);
};
void TaiSan::nhap()
{
    fflush(stdin);
    cout<<"Nhap ten tai san: "; gets(tenTS);
    cout<<"Nhap so luong: "; cin>>soLuong;
    fflush(stdin);
    cout<<"Nhap tinh trang: "; gets(tinhTrang);
}
void TaiSan::xuat()
{
    cout<<setw(30)<<left<<tenTS<<setw(20)<<left<<soLuong<<setw(30)<<left<<tinhTrang<<endl;
}
class Phieu
{
    char maPhieu[15], ngay[30];
    NhanVien x;
    Phong y;
    TaiSan *z;
    int n;
public:
    void nhap(), xuat();
    friend void timKiem(Phieu x);
    friend void sapXep(Phieu x);
};
void Phieu::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma phieu: "; gets(maPhieu);
    cout<<"Ngay lap: "; gets(ngay);
    x.nhap();
    y.nhap();
    cout<<"Nhap n: "; cin>>n;
    z=new TaiSan[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        z[i].nhap();
    }
}
void Phieu::xuat()
{
    cout<<setw(40)<<"PHIEU KIEM KE TAI SAN\n";
    cout<<"Ma phieu: "<<maPhieu<<"      Ngay kiem ke: "<<ngay<<endl;
    x.xuat();
    y.xuat();
    cout<<setw(30)<<left<<"Ten tai san"<<setw(20)<<left<<"So luong"<<setw(30)<<left<<"Tinh trang"<<endl;
    for (int i=0;i<n;i++)
        z[i].xuat();
    int t=0;
    for (int i=0;i<n;i++)
        t+=z[i].soLuong;
    cout<<"So tai san da kiem ke: "<<n<<"       Tong so luong:"<<t;
}
void timKiem(Phieu x)
{
    int check=0;
    for (int i=0;i<x.n;i++)
        if(strcmpi(x.z[i].tenTS,"May tinh")==0)
            check++;
    if(check>0)
        cout<<"Co may tinh\n";
    else
        cout<<"Khong co may tinh\n";
}
void sapXep(Phieu x)
{
    for (int i=0;i<x.n-1;i++)
        for (int j=i+1;j<x.n;j++)
            if(x.z[i].soLuong>x.z[j].soLuong)
             swap(x.z[i],x.z[j]);
}
int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    timKiem(a);
    sapXep(a);
    a.xuat();
    return 0;
}
