#include <bits/stdc++.h>

using namespace std;

class Mang
{
    int *a;
    int n;
public:
    void nhap(),xuat();
    Mang();
    Mang(int y);
    ~Mang();
};
void Mang::nhap()
{
    cout<<"nhap n="; cin>>n;
    a=new int[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
}
void Mang::xuat()
{
    for (int i=0;i<n;i++)
        cout<<setw(3)<<a[i];
    cout<<endl;
}
Mang::Mang()
{
    n=0;
    a=NULL;
}
Mang::Mang(int y)
{
    n=y;
    a=new int [n];
    for (int i=0;i<n;i++)
        a[i]=1;
}
Mang::~Mang()
{
    delete[] a;
}
int main()
{
    Mang k;
    k.xuat();
    Mang q(10);
    q.xuat();
    return 0;
}
