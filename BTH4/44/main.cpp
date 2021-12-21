#include <bits/stdc++.h>

using namespace std;

class PTBac2
{
    float a,b,c;
public:
    void nhap(), xuat(), giai();
    PTBac2();
    PTBac2(float a1, float b1, float c1);
};
PTBac2::PTBac2()
{
    a=0;
    b=0;
    c=0;
}
PTBac2::PTBac2(float a1, float b1, float c1)
{
    a=a1;
    b=b1;
    c=c1;
}
void PTBac2::nhap()
{
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
}
void PTBac2::xuat()
{
    cout<<a<<"x"<<(char)253;
    if(b<0)
        cout<<b<<"x";
    else
        cout<<"+"<<b<<"x";
    if(c<0)
        cout<<c;
    else
        cout<<"+"<<c;
    cout<<"=0"<<endl;
}
void PTBac2::giai()
{
    if(a==0)
        cout<<"Day khong la phuong trinh bac 2!!\n";
    else
    {
        float delta=b*b-4*c*a;
        if(delta<0)
            cout<<"Phuong trinh vo nghiem!!\n";
        else
        {
            cout<<"x1 = "<<(-b+sqrt(delta))/(2*a)<<endl;
            cout<<"x2 = "<<(-b-sqrt(delta))/(2*a)<<endl;

        }
    }
}
int main()
{
    cout<<"P:\n";
    PTBac2 p(3,2,-10);
    p.xuat();
    p.giai();
    cout<<"\n\nQ:\n";
    PTBac2 q;
    q.nhap();
    q.xuat();
    q.giai();
    return 0;
}
