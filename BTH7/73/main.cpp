#include <bits/stdc++.h>

using namespace std;

class Khoa
{
    char maKhoa[20], tenKhoa[30], truongKhoa[30];
    friend class TruongDH;
};
class Ban
{
    char maBan[20], tenBan[30], ngayThanhLap[20];
    friend class TruongDH;
};
class Truong
{
protected:
    char maTruong[20], tenTruong[30], diaChi[40];
public:
    void nhap(), xuat();
};
void Truong::nhap()
{
    cout<<"Nhap ma truong: "; fflush(stdin); gets(maTruong);
    cout<<"Nhap ten truong: "; fflush(stdin); gets(tenTruong);
    cout<<"Nhap dia chi: "; fflush(stdin); gets(diaChi);
}
void Truong::xuat()
{
    cout<<" - Ma truong: "<<maTruong<<endl;
    cout<<" - Ten truong: "<<tenTruong<<endl;
    cout<<" - Dia chi: "<<diaChi<<endl;
}
class TruongDH: public Truong
{
    Khoa *x;
    int n;
    Ban *y;
    int m;
public:
    void nhap(), xuat();
};
void TruongDH::nhap()
{
    Truong::nhap();
    cout<<"Nhap so khoa: "; cin>>n;
    x= new Khoa[n];
    cout<<"Nhap thong tin cac khoa: \n";
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        cout<<"Nhap ma khoa: "; fflush(stdin); gets(x[i].maKhoa);
        cout<<"Nhap ten khoa: "; fflush(stdin); gets(x[i].tenKhoa);
        cout<<"Nhap truong khoa: "; fflush(stdin); gets(x[i].truongKhoa);
    }

    cout<<"\nNhap so ban: "; cin>>m;
    y= new Ban[m];
    cout<<"Nhap thong tin cac ban: \n";
    for (int i=0;i<m;i++)
    {
        cout<<i+1<<".\n";
        cout<<"Nhap ma ban: "; fflush(stdin); gets(y[i].maBan);
        cout<<"Nhap ten ban: "; fflush(stdin); gets(y[i].tenBan);
        cout<<"Nhap ngay thanh lap: "; fflush(stdin); gets(y[i].ngayThanhLap);
    }
    cout<<endl;
}
void TruongDH::xuat()
{
    Truong::xuat();
    cout<<"--Cac khoa--\n";
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        cout<<" - Ma khoa: "<<x[i].maKhoa<<endl;
        cout<<" - Ten khoa: "<<x[i].tenKhoa<<endl;
        cout<<" - Truong khoa: "<<x[i].truongKhoa<<endl;
    }
    cout<<"--Cac ban--\n";
    for (int i=0;i<m;i++)
    {
        cout<<i+1<<".\n";
        cout<<" - Ma ban: "<<y[i].maBan<<endl;
        cout<<" - Ten ban: "<<y[i].tenBan<<endl;
        cout<<" - Ngay thanh lap: "<<y[i].ngayThanhLap<<endl;
    }
}

int main()
{
    TruongDH a;
    a.nhap();
    cout<<"\n\n----Thong tin truong-----\n";
    a.xuat();
    return 0;
}
