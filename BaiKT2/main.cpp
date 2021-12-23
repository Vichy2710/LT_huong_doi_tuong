#include <bits/stdc++.h>

using namespace std;
class HinhThang
{
    float a,b,h;
public:
    HinhThang();
    HinhThang(float x,float y,float z);
    friend istream& operator>>(istream& is, HinhThang &m);
    friend ostream& operator<<(ostream& os, HinhThang m);
    double operator-();
    HinhThang operator+(HinhThang m);
    bool operator==(HinhThang m);
};
HinhThang::HinhThang()
{
    a=0;b=0;h=0;
}
HinhThang::HinhThang(float x,float y,float z)
{
    a=x;b=y;h=z;
}
istream& operator>>(istream& is, HinhThang &m)
{
    is>>m.a>>m.b>>m.h;
    return is;
}
ostream& operator<<(ostream& os, HinhThang m)
{
    os<<"\nDay lon: "<<m.a;
    os<<"\nDay nho: "<<m.b;
    os<<"\nChieu cao: "<<m.h;
    return os;
}
double HinhThang::operator-()
{
    return (a+b)*h/2;
}
HinhThang HinhThang::operator+(HinhThang m)
{
    HinhThang ans;
    ans.a=a+m.a;
    ans.b=b+m.b;
    ans.h=h+m.h;
    return ans;
}
bool HinhThang::operator==(HinhThang m)
{
    return (a+b)*h/2 == (m.a+m.b)*m.h/2 ? true:false;
}
int main()
{
    HinhThang a,b;
    cin>>a>>b;
    cout<<a<<endl<<b;
    cout<<"\n\nDienTich: ";
    cout<<endl<<-a<<endl<<-b<<endl;
    fstream f1("HINHTHANG15.txt", ios::out);
    f1<<a<<endl<<b;
    f1<<"\n\nDienTich: ";
    f1<<endl<<-a<<endl<<-b<<endl;
    f1.close();

    HinhThang tong=a+b;
    cout<<"\nTong 2 hinh thang: "<<tong<<endl;
    fstream f2("HINHTHANG15.txt", ios::app);
    f2<<"\nTong 2 hinh thang: "<<tong<<endl;
    f2.close();
    if(a==b)
        cout<<"\n2 hinh thang bang nhau";
    else
        cout<<"\n2 hinh thang khong bang nhau";
    return 0;
}
