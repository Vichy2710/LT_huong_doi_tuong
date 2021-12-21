#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char MASV[10], TENSV[30];
    int TUOI;
public:
    void NHAP(), XUAT();
};
void SINHVIEN::NHAP()
{
    fflush(stdin);
    cout<<"Nhap ma sv: ";gets(MASV);
    cout<<"Nhap ten sv: "; gets(TENSV);
    cout<<"Nhap tuoi sv: "; cin>>TUOI;
    fflush(stdin);
}
void SINHVIEN::XUAT()
{
    cout<<setw(10)<<left<<MASV;
    cout<<setw(30)<<left<<MASV;
    cout<<TUOI<<endl;
}

class LOPHOC
{
    char MALH[10], PHONG[10];
    SINHVIEN *X;
    int n;
public:
    void NHAP(), XUAT();
};
void LOPHOC::NHAP()
{
    fflush(stdin);
    cout<<"Nhap ma lh: "; gets(MALH);
    cout<<"Nhap phong: "; gets(PHONG);
    cout<<"Nhap so luong hoc sinh: "; cin>>n;
    fflush(stdin);
    X = new SINHVIEN[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        X[i].NHAP();
    }
}
void LOPHOC::XUAT()
{
    cout<<"Ma lop hoc: "<<MALH;
    cout<<"\nPhong: "<<PHONG<<endl;
    cout<<setw(10)<<left<<"Ma SV";
    cout<<setw(30)<<left<<"Ten SV";
    cout<<"Tuoi"<<endl;
    for (int i=0;i<n;i++)
        X[i].XUAT();
}
int main()
{
    LOPHOC a;
    a.NHAP();
    cout<<"----Thong tin lop hoc----\n";
    a.XUAT();
    return 0;
}
