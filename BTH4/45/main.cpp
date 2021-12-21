#include <bits/stdc++.h>

using namespace std;
class Array
{
    int *value;
    int n;
public:
    Array();
    Array(int m);
    ~Array();
    void nhap(), xuat();
};
Array::Array()
{
    n=0;
    value=NULL;
}
Array::Array(int m)
{
    n=m;
    value= new int[n];
    for (int i=0;i<n;i++)
        value[i]=0;
}
Array::~Array()
{
    n=0;
    delete[] value;
}
void Array::nhap()
{
    cout<<"Nhap n = "; cin>>n;
    value=new int[n];
    for (int i=0;i<n;i++)
    {
        cout<<"value["<<i<<"] = ";
        cin>>value[i];
    }
}
void Array::xuat()
{
    for (int i=0;i<n;i++)
        cout<<value[i]<<" ";
}
int main()
{
    Array a(4);
    a.xuat();
    cout<<"\n\nNhap mang: "<<endl;
    a.nhap();
    a.xuat();
    return 0;
}
