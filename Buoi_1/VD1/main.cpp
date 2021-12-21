#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
    char hoTen[30];
    int tuoi;
    char que[30];
public:
    void nhap();
    void xuat();
};

void SinhVien::nhap()
{
    fflush(stdin);
    cout<<"Ho ten: "; gets(hoTen);
    cout<<"Tuoi: "; cin>>tuoi;
    fflush(stdin);
    cout<<"Que: "; gets(que);
}

void SinhVien::xuat()
{
    cout<<"Ho ten: "<<hoTen<<endl;
    cout<<"Tuoi: "<<tuoi<<endl;
    cout<<"Que: "<<que<<endl;
}

int main()
{
    //Con tro + Cap phat = Mang
    SinhVien *a; int n;
    cout<<"n="; cin>>n;
    a= new SinhVien[n];
    for (int i=0;i<n;i++)
        a[i].nhap();
    for (int i=0;i<n;i++)
        a[i].xuat();

    return 0;
}
