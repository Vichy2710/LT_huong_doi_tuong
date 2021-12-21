#include<iostream>
#include<conio.h>
#include<cstring>
#include<math.h>
#include<iomanip>

using namespace std;
class SinhVien
{
    char maSV[15], hoTen[30];
    int tuoi;
    float diem;
public:
    void nhap(), xuat();
};
void SinhVien::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma sv: "; gets(maSV);
    cout<<"Nhap ten sv: "; gets(hoTen);
    cout<<"Nhap tuoi sv: "; cin>>tuoi;
    cout<<"Nhap diem sv: "; cin>>diem;
    fflush(stdin);
}
void SinhVien::xuat()
{
    cout<<setw(15)<<left<<maSV;
    cout<<setw(30)<<left<<hoTen;
    cout<<setw(10)<<left<<tuoi;
    cout<<diem<<endl;
}

int main()
{
    SinhVien a;
    cout<<"Nhap vao thong tin sinh vien: \n";
    a.nhap();
    cout<<"\n--------\n";
    cout<<setw(15)<<left<<"Ma SV";
    cout<<setw(30)<<left<<"Ho ten";
    cout<<setw(10)<<left<<"Tuoi";
    cout<<"Diem"<<endl;
    a.xuat();
}
