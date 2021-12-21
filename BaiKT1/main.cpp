#include <bits/stdc++.h>

using namespace std;
class PhongMay;
class May
{
    char maMay[20], kieuMay[30], nhanHieu[30];
    int namSX;
    float giaTien;
public:
    void Nhap(),Xuat();
    friend void SapXepTheoGiaTien(PhongMay a);
    friend void KiemTraSoLuong(PhongMay a);
};
void May::Nhap()
{
    cout<<"Nhap ma may: "; fflush(stdin); gets(maMay);
    cout<<"Nhap kieu may: "; fflush(stdin); gets(kieuMay);
    cout<<"Nhap nhan  hieu: "; fflush(stdin); gets(nhanHieu);
    cout<<"Nhap nam san xuat: "; cin>>namSX;
    cout<<"Nhap gia tien: "; cin>>giaTien;
}
void May::Xuat()
{
    cout<<"Ma may: "<<maMay<<endl;
    cout<<"Kieu may: "<<kieuMay<<endl;
    cout<<"Nhan hieu: "<<nhanHieu<<endl;
    cout<<"Nam sx: "<<namSX<<endl;
    cout<<"Gia tien: "<<giaTien<<endl;
}

class Phong
{
protected:
    char maPh[20], tenPh[30];
    float dienTich;
    char toaNha[20];
public:
    void Nhap(), Xuat();
};
void Phong::Nhap()
{
    cout<<"Nhap ma phong: "; fflush(stdin); gets(maPh);
    cout<<"Nhap ten phong: "; fflush(stdin); gets(tenPh);
    cout<<"Nhap dien tich: "; cin>>dienTich;
    cout<<"Nhap toa nha: "; fflush(stdin); gets(toaNha);
}
void Phong::Xuat()
{
    cout<<"Ma phong: "<<maPh<<endl;
    cout<<"Ten phong: "<<tenPh<<endl;
    cout<<"Dien tich: "<<dienTich<<endl;
    cout<<"Toa nha: "<<toaNha<<endl;
}

class PhongMay : public Phong
{
    char nguoiQuanLy[30];
    May *x;
    int n;
public:
    void Nhap(), Xuat();

    friend void SuaDienTich(PhongMay &a);
    friend void SapXepTheoGiaTien(PhongMay a);
    friend void KiemTraSoLuong(PhongMay a);
};
void PhongMay::Nhap()
{
    Phong::Nhap();
    cout<<"Nhap ten nguoi quan ly: "; fflush(stdin); gets(nguoiQuanLy);
    cout<<"Nhap so luong may: "; cin>>n;
    x= new May[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        x[i].Nhap();
    }
}
void PhongMay::Xuat()
{
    Phong::Xuat();
    cout<<"Nguoi quan ly: "<<nguoiQuanLy<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        x[i].Xuat();
    }
}

void SuaDienTich(PhongMay &a)
{
    a.dienTich=60;
}

void SapXepTheoGiaTien(PhongMay a)
{
    for (int i=0;i<a.n-1; i++)
        for (int j=i+1; j<a.n;j++)
            if(a.x[i].giaTien>a.x[j].giaTien)
                swap(a.x[i], a.x[j]);
}

void KiemTraSoLuong(PhongMay a)
{
    int check=0;
    for (int i=0;i<a.n;i++)
        if(strcmpi(a.x[i].nhanHieu,"IBM")==0)
            check++;
    if (check>0)
        cout<<"Co may nhan hieu IBM !!\n";
    else
        cout<<"Khong co may nhan hieu IBM !!\n";
}
int main()
{
    PhongMay a;
    cout<<"---Nhap thong tin phong may: \n";
    a.Nhap();
    cout<<"\n---Thong tin phong may----\n";
    a.Xuat();

    cout<<"\n---Sua dien tich phong---\n";
    SuaDienTich(a);
    a.Xuat();

    cout<<"\n---Sap xep danh sach may---\n";
    SapXepTheoGiaTien(a);
    a.Xuat();

    cout<<"\n---Tim may IBM---\n";
    KiemTraSoLuong(a);
    return 0;
}
