#include <bits/stdc++.h>

using namespace std;

class Ve
{
protected:
    float giaGoc;
    char ngay[20];
public:
    void nhap()
    {
        cout<<"Nhap gia goc: "; cin>>giaGoc;
        cout<<"Nhap ngay: "; fflush(stdin); gets(ngay);
    }
    void xuat()
    {
        cout<<setw(10)<<left<<giaGoc<<setw(15)<<left<<ngay;
    }
};

class VeNguoiLon : public Ve
{
    float giam, giaVe;
public:
    void nhap()
    {
        Ve::nhap();
        cout<<"Nhap % giam gia: "; cin>>giam;
        cout<<"Nhap gia ve: "; cin>>giaVe;
    }
    void xuat()
    {
        Ve::xuat();
        cout<<setw(10)<<left<<giam<<setw(15)<<left<<giaVe<<endl;
    }
};

class VeTreEm : public Ve
{
    float giam, giaVe;
public:
    void nhap()
    {
        Ve::nhap();
        cout<<"Nhap % giam gia: "; cin>>giam;
        cout<<"Nhap gia ve: "; cin>>giaVe;
    }
    void xuat()
    {
        Ve::xuat();
        cout<<setw(10)<<left<<giam<<setw(15)<<left<<giaVe<<endl;
    }
};
int main()
{
    VeNguoiLon a;
    cout<<"Nhap thong tin ve nguoi lon:\n";
    a.nhap();
    cout<<"Nhap thong tin ve tre em:\n";
    VeTreEm b;
    b.nhap();
    cout<<endl;
    cout<<setw(10)<<left<<"Gia goc"<<setw(15)<<left<<"Ngay"
    <<setw(10)<<left<<"Giam(%)"<<setw(15)<<left<<"Gia ve"<<endl;
    a.xuat();
    b.xuat();
    return 0;
}
