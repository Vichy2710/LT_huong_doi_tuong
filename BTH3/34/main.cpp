#include <bits/stdc++.h>

using namespace std;

class PhongMay;
class May
{
    char maMay[10], kieuMay[30], tinhTrang[20];
public:
    void nhap(), xuat();
    friend void suaTinhTrang(PhongMay a);
    friend void suaDienTich(PhongMay &a);
};
void May::nhap()
{
    cout<<"Nhap ma may: "; fflush(stdin); gets(maMay);
    cout<<"Nhap kieu may: "; fflush(stdin); gets(kieuMay);
    cout<<"Nhap tinh trang: "; fflush(stdin); gets(tinhTrang);
}
void May::xuat()
{
    cout<<setw(10)<<left<<maMay<<setw(30)<<left<<kieuMay<<tinhTrang<<endl;
}

class QuanLy
{
    char maQL[10], hoTen[30];
public:
    void nhap(), xuat();
};
void QuanLy::nhap()
{
    cout<<"Nhap ma quan ly: "; fflush(stdin); gets(maQL);
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
}
void QuanLy::xuat()
{
    cout<<"Ma quan ly: "<<maQL<<"\t\tHo ten: "<<hoTen<<endl;
}

class PhongMay
{
    char maPhong[10], tenPhong[20];
    float dienTich;
    QuanLy x;
    May *y;
    int n;
public:
    void nhap(), xuat();
    friend void suaTinhTrang(PhongMay a);
    friend void suaDienTich(PhongMay &a);
};
void PhongMay::nhap()
{
    cout<<"Nhap ma phong: "; fflush(stdin); gets(maPhong);
    cout<<"Nhap ten phong: "; fflush(stdin); gets(tenPhong);
    cout<<"Nhap dien tich: "; cin>>dienTich;
    x.nhap();
    cout<<"Nhap so may: "; cin>>n;
    y= new May[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        y[i].nhap();
    }
}
void PhongMay::xuat()
{
    cout<<"Ma phong: "<<maPhong<<"\t\tTen phong: "<<tenPhong;
    cout<<"\nDien tich: "<<dienTich<<endl;
    cout<<endl;
    x.xuat();
    cout<<endl;
    cout<<setw(10)<<left<<"Ma may"<<setw(30)<<left<<"Kieu may"<<"Tinh trang"<<endl;
    for (int i=0;i<n;i++)
        y[i].xuat();
}

void suaTinhTrang(PhongMay a)
{
    for (int i=0;i<a.n;i++)
        if(strcmpi(a.y[i].maMay,"MS001")==0)
            strcpy(a.y[i].tinhTrang,"Tot");
}
void suaDienTich(PhongMay &a)
{
    a.dienTich=50;
}
int main()
{
    PhongMay a;
    cout<<"Nhap thong tin phong may:\n";
    a.nhap();
    cout<<"\n----Thong tin phong may----\n";
    a.xuat();

    cout<<"\n----Thong tin phong may sau khi chinh sua tinh trang----\n";
    suaTinhTrang(a);
    a.xuat();
    cout<<"\n----Thong tin phong may sau khi chinh sua dien tich----\n";
    suaDienTich(a);
    a.xuat();
    return 0;
}
