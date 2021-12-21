#include <bits/stdc++.h>

using namespace std;

class NCC
{
    char maNCC[30], tenNCC[30], diaChiNCC[30];
public:
    void nhap(), xuat();
};
void NCC::nhap()
{
    cout<<"Nhap ma ncc: "; fflush(stdin); gets(maNCC);
    cout<<"Nhap ten ncc: "; fflush(stdin); gets(tenNCC);
    cout<<"Nhap dia chi ncc: "; fflush(stdin); gets(diaChiNCC);
}
void NCC::xuat()
{
    cout<<setw(15)<<left<<"Ma NCC:"<<setw(30)<<left<<maNCC;
    cout<<setw(15)<<left<<"Ten NCC:"<<tenNCC<<endl;
    cout<<setw(15)<<left<<"Dia chi:"<<diaChiNCC<<endl;
}

class Hang
{
    char tenHang[30];
    float donGia;
    int soLuong;
public:
    void nhap(), xuat();
    friend class Phieu;
};
void Hang::nhap()
{
    cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
    cout<<"Nhap don gia: "; cin>>donGia;
    cout<<"Nhap so luong: "; cin>>soLuong;
}
void Hang::xuat()
{
    cout<<setw(25)<<left<<tenHang<<setw(20)<<left<<donGia
    <<setw(20)<<left<<soLuong<<donGia*soLuong<<endl;
}

class Phieu
{
    char maPhieu[30], ngayLap[20];
    NCC x;
    Hang *y;
    int n;
public:
    void nhap(), xuat();
};
void Phieu::nhap()
{
    cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
    cout<<"Nhap ngay lap: "; fflush(stdin); gets(ngayLap);
    x.nhap();
    cout<<"Nhap so mat hang: "; cin>>n;
    y= new Hang[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        y[i].nhap();
    }
}
void Phieu::xuat()
{
    cout<<setw(45)<<"PHIEU NHAP HANG\n";
    cout<<setw(15)<<left<<"Ma phieu:"<<setw(30)<<left<<maPhieu;
    cout<<setw(15)<<left<<"Ngay lap:"<<ngayLap<<endl;
    x.xuat();
    cout<<setw(25)<<left<<"Ten hang"<<setw(20)<<left<<"Don gia"
    <<setw(20)<<left<<"So luong"<<"Thanh tien"<<endl;
    for (int i=0;i<n;i++)
        y[i].xuat();
    float sum=0;
    for (int i=0;i<n;i++)
        sum+=y[i].soLuong*y[i].donGia;
    cout<<setw(65)<<right<<"Cong thanh tien  "<<sum<<endl;
}
int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    return 0;
}
