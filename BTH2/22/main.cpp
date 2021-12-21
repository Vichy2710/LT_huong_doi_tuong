#include <bits/stdc++.h>
using namespace std;

class Mang
{
    int n;
    int *a;
public:
    void nhap(), xuat();
    void sapXep();
};
void Mang::nhap()
{
    cout<<"Nhap n="; cin>>n;
    a= new int[n];
    cout<<"Nhap cac phan tu cua n: ";
    for (int i=0;i<n;i++)
        cin>>a[i];
}
void Mang::xuat()
{
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
void Mang::sapXep()
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if(a[i]>a[j])
                swap(a[i],a[j]);
}

int main()
{
    Mang a;
    a.nhap();
    a.sapXep();
    a.xuat();
    return 0;
}
