#include <bits/stdc++.h>
#include<unistd.h>
using namespace std;

class Vehicle
{
protected:
    char nhanHieu[20];
    int namSX;
    char hang[20];
public:
    void nhap(), xuat();
};
void Vehicle::nhap()
{
    cout<<"Nhap nhan hieu: "; fflush(stdin); gets(nhanHieu);
    cout<<"Nhap nam sx: "; cin>>namSX;
    cout<<"Nhap hang: "; fflush(stdin); gets(hang);
}
void Vehicle::xuat()
{
    cout<<"Nhan hieu: "<<nhanHieu<<endl;
    cout<<"Nam sx: "<<namSX<<endl;
    cout<<"Hang: "<<hang<<endl;
}

class OTo : public Vehicle
{
    int soChoNgoi;
    float dungTich;
public:
    void nhap(), xuat();
    friend void suaDungTich(OTo &a);
};
void OTo::nhap()
{
    Vehicle::nhap();
    cout<<"Nhap so cho ngoi: "; cin>>soChoNgoi;
    cout<<"Nhap dung tich: "; cin>>dungTich;
}
void OTo::xuat()
{
    Vehicle::xuat();
    cout<<"So cho ngoi: "<<soChoNgoi<<endl;
    cout<<"Dung tich: "<<dungTich<<endl;
}

class Moto : public Vehicle
{
    float phanKhoi;
public:
    void nhap(), xuat();
};
void Moto::nhap()
{
    Vehicle::nhap();
    cout<<"Nhap phan khoi: "; cin>>phanKhoi;
}
void Moto::xuat()
{
    Vehicle::xuat();
    cout<<"Phan khoi: "<<phanKhoi<<endl;
}

void suaDungTich(OTo &a)
{
    a.dungTich=3.0;
}
int main()
{
    OTo a;
    cout<<"Nhap thong tin o to:\n";
    a.nhap();
    cout<<"--\nThong tin o to: \n";
    a.xuat();

    sleep(2);
    Moto b;
    cout<<"\nNhap thong tin moto:\n";
    b.nhap();
    cout<<"--\nThong tin moto: \n";
    b.xuat();

    sleep(2);
    cout<<"--\nThong tin o to sau khi sua:\n";
    suaDungTich(a);
    a.xuat();

    return 0;
}
