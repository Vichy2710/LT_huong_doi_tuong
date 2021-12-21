#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

class Phieu;
class NhanVien
{
    char tenNV[30], chucVu[30];
public:
    void nhap(), xuat();
};
void NhanVien::nhap()
{
    cout<<"Nhap ten nhan vien: "; fflush(stdin); gets(tenNV);
    cout<<"Nhap chuc vu: "; fflush(stdin); gets(chucVu);
}
void NhanVien::xuat()
{
    cout<<setw(20)<<left<<"Nhan vien kiem ke:"<<setw(25)<<left<<tenNV;
    cout<<setw(15)<<left<<"Chuc vu:"<<chucVu<<endl;
}

class Phong
{
    char tenPhong[30], maPhong[30], truongPhong[30];
public:
    void nhap(), xuat();
};
void Phong::nhap()
{
    cout<<"Nhap ten phong: "; fflush(stdin); gets(tenPhong);
    cout<<"Nhap ma phong: "; fflush(stdin); gets(maPhong);
    cout<<"Nhap ten truong phong: "; fflush(stdin); gets(truongPhong);
}
void Phong::xuat()
{
    cout<<setw(20)<<left<<"Kiem ke tai phong:"<<setw(25)<<left<<tenPhong;
    cout<<setw(15)<<left<<"Ma phong:"<<maPhong<<endl;
    cout<<setw(20)<<left<<"Truong phong:"<<truongPhong<<endl;
}

class TaiSan
{
    char tenTS[30], tinhTrang[30];
    int soLuong;
public:
    void nhap(), xuat();
    friend class Phieu;
    friend void Bonus1(Phieu a);
    friend void Bonus2(Phieu a);
};
void TaiSan::nhap()
{
    cout<<"Nhap ten tai san: "; fflush(stdin); gets(tenTS);
    cout<<"Nhap so luong: "; cin>>soLuong;
    cout<<"Nhap tinh trang: "; fflush(stdin); gets(tinhTrang);
};
void TaiSan::xuat()
{
    cout<<setw(30)<<left<<tenTS<<setw(15)<<left<<soLuong<<tinhTrang<<endl;
}

class Phieu
{
    char maPhieu[20], ngayKiemKe[20];
    NhanVien a;
    Phong b;
    TaiSan *c;
    int n;
public:
    void nhap(), xuat();
    friend void Bonus1(Phieu a);
    friend void Bonus2(Phieu a);
};
void Phieu::nhap()
{
    cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
    cout<<"Nhap ngay kiem ke: "; fflush(stdin); gets(ngayKiemKe);
    a.nhap();
    b.nhap();
    cout<<"Nhap so tai san: "; cin>>n;
    c= new TaiSan[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        c[i].nhap();
    }
}
void Phieu::xuat()
{
    cout<<setw(45)<<right<<"PHIEU KIEM KE TAI SAN \n";
    cout<<setw(20)<<left<<"Ma phieu:"<<setw(25)<<left<<maPhieu;
    cout<<setw(15)<<left<<"Ngay kiem ke:"<<ngayKiemKe<<endl;
    a.xuat();
    b.xuat();
    cout<<endl;
    cout<<setw(30)<<left<<"Ten tai san"<<setw(15)<<left<<"So luong"<<"Tinh trang"<<endl;
    for (int i=0;i<n;i++)
        c[i].xuat();
    int tongSL=0;
    for (int i=0;i<n;i++)
        tongSL+=c[i].soLuong;
    cout<<"\nSo tai san da kiem ke: "<<n<<"\t\tTong so luong: "<<tongSL<<endl;
}

//Bonus
void Bonus1(Phieu a)
{
    for (int i=0;i<a.n;i++)
        if(strcmpi(a.c[i].tenTS,"May vi tinh")==0)
            a.c[i].soLuong=20;
}
void Bonus2(Phieu a)
{
    for (int i=0;i<a.n-1;i++)
        for (int j=i+1;j<a.n;j++)
            if(a.c[i].soLuong>a.c[j].soLuong)
                swap(a.c[i],a.c[j]);
}
int main()
{
    Phieu a;
    a.nhap();
    a.xuat();

    sleep(2);

    cout<<"\nSua thong tin So luong cua tai san \"May vi tinh\" thanh 20\n\n";
    Bonus1(a);
    a.xuat();

    sleep(2);

    cout<<"\nSap xep danh sach cac tai san kiem ke theo chieu tang dan cua so luong\n\n";
    Bonus2(a);
    a.xuat();
    return 0;
}
