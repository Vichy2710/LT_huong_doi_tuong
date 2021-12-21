#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
    char maSV[20], tenSV[30], lop[20], khoa[10];
public:
    void nhap(), xuat();
};
void SinhVien::nhap()
{
    cout<<"Nhap ma sv: "; fflush(stdin); gets(maSV);
    cout<<"Nhap ten sv: "; fflush(stdin); gets(tenSV);
    cout<<"Nhap lop: "; fflush(stdin); gets(lop);
    cout<<"Nhap khoa: "; fflush(stdin); gets(khoa);
}
void SinhVien::xuat()
{
    cout<<setw(15)<<"  Ma sinh vien:"<<setw(10)<<left<<maSV;
    cout<<setw(15)<<"Ten sinh vien:"<<tenSV<<endl;
    cout<<setw(15)<<"  Lop:"<<setw(10)<<left<<lop;
    cout<<setw(15)<<"Khoa:"<<khoa<<endl;
}

class MonHoc
{
    char tenMon[30];
    int soTrinh;
    float diem;
public:
    void nhap(), xuat();
    friend class Phieu;
};
void MonHoc::nhap()
{
    cout<<"Nhap ten mon: "; fflush(stdin); gets(tenMon);
    cout<<"Nhap so trinh : "; cin>>soTrinh;
    cout<<"Nhap diem: "; cin>>diem;
}
void MonHoc::xuat()
{
    cout<<setw(20)<<left<<tenMon<<setw(15)<<left
    <<soTrinh<<diem<<endl;
}

class Phieu
{
    SinhVien a;
    MonHoc *b;
    int n;
public:
    void nhap(), xuat();
};
void Phieu::nhap()
{
    a.nhap();
    cout<<"Nhap so mon hoc: "; cin>>n;
    b= new MonHoc[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        b[i].nhap();
    }
}
void Phieu::xuat()
{
    cout<<setw(35)<<right<<"PHIEU BAO DIEM\n";
    a.xuat();
    cout<<"Bang diem:\n";
    cout<<setw(20)<<left<<"Ten mon"<<setw(15)<<left
    <<"So trinh"<<"Diem"<<endl;
    for (int i=0;i<n;i++)
        b[i].xuat();
    float tong=0, trinh=0;
    for (int i=0;i<n;i++)
    {
        tong+=b[i].soTrinh*b[i].diem;
        trinh+=b[i].soTrinh;
    }
    cout<<setw(35)<<right<<"Diem trung binh  "<<tong/trinh<<endl;

}
int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    return 0;
}
