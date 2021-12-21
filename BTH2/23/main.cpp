#include <bits/stdc++.h>

using namespace std;

class MangSoThuc
{
    float *a;
    int n;
public:
    void nhap(), xuat();
    float maxNum(), minNum();
};
void MangSoThuc::nhap()
{
    cout<<"Nhap n="; cin>>n;
    a= new float [n];
    cout<<"Nhap cac phan tu cua mang: ";
    for (int i=0;i<n;i++)
        cin>>a[i];
}
void MangSoThuc::xuat()
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
float MangSoThuc::maxNum()
{
    float tmp=a[0];
    for (int i=1;i<n;i++)
        if(tmp<a[i])
            tmp=a[i];
    return tmp;
}
float MangSoThuc::minNum()
{
    float tmp=a[0];
    for (int i=1;i<n;i++)
        if(tmp>a[i])
            tmp=a[i];
    return tmp;
}
int main()
{
    MangSoThuc a;
    a.nhap();
    cout<<"Max = "<<a.maxNum();
    cout<<"\nMin = "<<a.minNum()<<endl;
    a.xuat();
    return 0;
}
