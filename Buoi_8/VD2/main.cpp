#include <bits/stdc++.h>

using namespace std;

class Mang
{
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    Mang operator+(Mang x);
    Mang operator--();
    int operator++();
};
void Mang::nhap()
{
    cout<<"Nhap n: "; cin>>n;
    a=new int[n];
    cout<<"Nhap cac phan tu: ";
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void Mang::xuat()
{
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
Mang Mang::operator+(Mang x)
{
    Mang k;
    if(x.n==n)
    {
        k.n=n;
        k.a=new int[n];
        for (int i=0;i<n;i++)
            k.a[i]=x.a[i]+a[i];
    }
    else
    {
        k.n=0;
        k.a=NULL;
    }
    return k;
}
Mang Mang::operator--()
{
    for (int i=0;i<n;i++)
        a[i]=-a[i];
    return *this;
}
int Mang::operator++()
{
    int k=a[0];
    for (int i=1;i<n;i++)
        if(k<a[i])
            k=a[i];
    return k;
}
int main()
{
    Mang a;
    cout<<"Nhap mang a: \n";
    a.nhap();
    cout<<"Mang a: ";
    a.xuat(); cout<<endl;
    Mang b;
    cout<<"Nhap mang b: \n";
    b.nhap();
    cout<<"Mang b: ";
    b.xuat(); cout<<endl;

    Mang c;
    c=a+b;
    cout<<"a + b = "; c.xuat();
    a=--a;
    cout<<"\nMang a sau khi doi dau: "; a.xuat();
    cout<<"\nmax = "<<++a;
    return 0;
}
