#include <bits/stdc++.h>

using namespace std;
class PhanSo
{
    float tu, mau;
public:
    PhanSo operator+(PhanSo a);
    PhanSo operator-(PhanSo a);
    PhanSo operator*(PhanSo a);
    PhanSo operator/(PhanSo a);
    friend istream& operator>>(istream& is, PhanSo &a);
    friend ostream& operator<<(ostream& os, PhanSo a);
    double operator-();
};
double PhanSo::operator-()
{
    return tu/mau;
}
PhanSo PhanSo::operator+(PhanSo a)
{
    PhanSo ans;
    ans.tu=tu*a.mau + mau*a.tu;
    ans.mau=mau*a.mau;
    return ans;
}
PhanSo PhanSo::operator-(PhanSo a)
{
    PhanSo ans;
    ans.tu=tu*a.mau - mau*a.tu;
    ans.mau=mau*a.mau;
    return ans;
}
PhanSo PhanSo::operator*(PhanSo a)
{
    PhanSo ans;
    ans.tu=tu*a.tu;
    ans.mau=mau*a.mau;
    return ans;
}
PhanSo PhanSo::operator/(PhanSo a)
{
    PhanSo ans;
    ans.tu=tu*a.mau;
    ans.mau=mau*a.tu;
    return ans;
}
istream& operator>>(istream& is, PhanSo &a)
{
    is>>a.tu>>a.mau;
    return is;
}
ostream& operator<<(ostream& os, PhanSo a)
{
    os<<a.tu<<"/"<<a.mau;
    return os;
}
int main()
{
    PhanSo a,b;
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    cout<<a+b<<endl<<a-b<<endl<<a*b<<endl<<a/b<<endl;
    cout<<endl<<-a<<endl<<-b;

    fstream file("PhanSo.txt", ios::out);
    file<<a<<endl<<b<<endl;
    file<<a+b<<endl<<a-b<<endl<<a*b<<endl<<a/b<<endl;
    file<<endl<<-a<<endl<<-b;
    file.close();
    return 0;
}
