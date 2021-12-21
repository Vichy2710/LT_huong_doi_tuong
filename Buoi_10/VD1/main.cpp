#include <bits/stdc++.h>

using namespace std;

class Hang
{
protected:
    char maHang[20];
    float donGia;
    int soLuong;
public:
    virtual void nhap();
    virtual void xuat();
    friend void SuaDonGia(Hang *a, float DGnew);
};
void Hang::nhap()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
    cout<<"Nhap don gia: "; cin>>donGia;
    cout<<"Nhap so luong: "; cin>>soLuong;
}
void Hang::xuat()
{
    cout<<setw(10)<<left<<maHang<<setw(10)<<left<<donGia
    <<setw(10)<<left<<soLuong;
}

class HangMayMac : public Hang
{
    char chatLieu[20];
    float sizee;
public:
    void nhap(), xuat();
};
void HangMayMac::nhap()
{
    Hang::nhap();
    cout<<"Nhap chat lieu: "; fflush(stdin); gets(chatLieu);
    cout<<"Nhap size: "; cin>>sizee;
}
void HangMayMac::xuat()
{
    Hang::xuat();
    cout<<setw(20)<<left<<chatLieu<<setw(10)<<left<<sizee<<endl;
}

class HangDienTu : public Hang
{
    float dienAp, congSuat;
public:
    void nhap(), xuat();
};
void HangDienTu::nhap()
{
    Hang::nhap();
    cout<<"Nhap dien ap: "; cin>>dienAp;
    cout<<"Nhap cong suat: "; cin>>congSuat;
}
void HangDienTu::xuat()
{
    Hang::xuat();
    cout<<setw(10)<<left<<dienAp<<setw(10)<<left<<congSuat<<endl;
}

void SuaDonGia(Hang *a, float DGnew)
{
    a->donGia=DGnew;
}
int main()
{
    Hang *a;
    HangMayMac b;
    HangDienTu c;
    cout<<"---Hang may mac: \n";
    a=&b; a->nhap();
        a->xuat();
    SuaDonGia(a,40); a->xuat();
    cout<<"---Hang dien tu: \n";
    a=&c; a->nhap();
        a->xuat();
    SuaDonGia(a,80); a->xuat();
    return 0;
}
