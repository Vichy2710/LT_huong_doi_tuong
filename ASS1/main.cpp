#include <bits/stdc++.h>

using namespace std;

class Phieu;
class NhaCungCap
{
    char maNCC[30], tenNCC[30], diaChi[50], sdt[20];
public:
    void nhap(), xuat();
};
void NhaCungCap::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma nha cung cap: "; gets(maNCC);
    cout<<"Nhap ten nha cung cap: "; gets(tenNCC);
    cout<<"Nhap dia chi: "; gets(diaChi);
    cout<<"Nhap so dien thoai: "; gets(sdt);
}
void NhaCungCap::xuat()
{
    cout<<setw(15)<<left<<"Ma nha cung cap: "<<setw(40)<<left<<maNCC;
    cout<<setw(15)<<left<<"Ten nha cung cap: "<<setw(40)<<left<<tenNCC<<endl;
}

class SanPham
{
    char maSP[20], tenSP[30];
    int soLuong;
    float donGia;
public:
    void nhap(), xuat();
    friend class Phieu;
    friend int check(Phieu a);
    friend void sapXep(Phieu a);
};
void SanPham::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma san pham: "; gets(maSP);
    cout<<"Nhap ten san pham: "; gets(tenSP);
    cout<<"Nhap so luong: "; cin>>soLuong;
    cout<<"Nhap don gia: "; cin>>donGia;
    fflush(stdin);
}
void SanPham::xuat()
{
    cout<<setw(20)<<left<<maSP<<setw(30)<<left<<tenSP<<setw(20)<<left<<soLuong
    <<setw(20)<<left<<donGia<<donGia*soLuong<<endl;
}

class Phieu
{
    char maPhieu[15], ngayLap[20];
    NhaCungCap x;
    SanPham *y;
    int n;
public:
    void nhap(), xuat();
    friend int check(Phieu a);
    friend void sapXep(Phieu a);
};
void Phieu::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma phieu: "; gets(maPhieu);
    cout<<"Nhap ngay lap: "; gets(ngayLap);
    x.nhap();
    cout<<"Nhap so san pham n="; cin>>n;
    fflush(stdin);
    y=new SanPham[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        y[i].nhap();
    }
}
void Phieu::xuat()
{
    cout<<"\nDai hoc Victory\n";
    cout<<setw(40)<<left<<"PHIEU NHAP VAN PHONG PHAM\n";
    cout<<setw(15)<<left<<"Ma phieu: "<<setw(40)<<left<<maPhieu;
    cout<<setw(15)<<left<<"Ngay lap: "<<setw(40)<<left<<ngayLap<<endl;
    x.xuat();
    cout<<setw(20)<<left<<"Ma SP"<<setw(30)<<left<<"Ten san pham"<<setw(20)<<left<<"So luong"
    <<setw(20)<<left<<"Don gia"<<"Thanh tien"<<endl;
    for (int i=0;i<n;i++)
        y[i].xuat();
    float k=0;
    for (int i=0;i<n;i++)
        k+=y[i].soLuong*y[i].donGia;
    cout<<setw(40)<<left<<"TONG"<<setw(50)<<left<<""<<k<<endl;
    cout<<setw(35)<<left<<"   Hieu truong"<<setw(35)<<left<<"Phong tai chinh"<<setw(35)<<left<<"Nguoi lap\n";
}

//BONUS
int check(Phieu a)
{
    int cnt=0;
    for (int i=0;i<a.n;i++)
        if(a.y[i].soLuong<80)
            cnt++;
    return cnt;
}
void sapXep(Phieu a)
{
    for (int i=0;i<a.n-1;i++)
        for (int j=i+1;j<a.n;j++)
            if(a.y[i].donGia>a.y[j].donGia)
                swap(a.y[i], a.y[j]);
}
int main()
{
    Phieu a;
    a.nhap();
    a.xuat();

    cout<<"\n\nCo "<<check(a)<<" san pham co so luong nhap nho hon 80 trong phieu\n";
    sapXep(a);
    a.xuat();
    return 0;
}
