#include <bits/stdc++.h>

using namespace std;

class Hinh
{
protected:
    int mauSac, vien;
public:
    void nhap(), xuat();
    Hinh(int x, int y);
};
void Hinh::nhap()
{
    cout<<"Mau sac: "; cin>>mauSac;
    cout<<"Vien: "; cin>>vien;
}
void Hinh::xuat()
{
    cout<<"Mau sac: "<<mauSac<<endl;
    cout<<"Vien: "<<vien<<endl;
}
Hinh::Hinh(int x, int y)
{
    mauSac=x;
    vien=y;
}

class HCN: public Hinh
{
    float dai, rong;
public:
    void nhap(), xuat();
    HCN(int x, int y, float z, float t);
};
HCN::HCN(int x, int y, float z, float t):Hinh(x,y)
{
    mauSac=x;
    vien=y;
    dai=z;
    rong=t;
}
void HCN::nhap()
{
    Hinh::nhap();
    cout<<"Dai: "; cin>>dai;
    cout<<"Rong: "; cin>>rong;
}
void HCN::xuat()
{
    Hinh::xuat();
    cout<<"Dai: "<<dai<<endl;
    cout<<"Rong: "<<rong<<endl;
}
int main()
{
    HCN a(1,2,3,4);
    a.xuat();
    return 0;
}
