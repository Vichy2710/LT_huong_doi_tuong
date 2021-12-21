#include <bits/stdc++.h>

using namespace std;

class PhanSo
{
    float tuSo, mauSo;
public:
    PhanSo();
    PhanSo(float a, float b);
    PhanSo operator*(PhanSo a);
    float operator-();
    friend istream& operator>>(istream& is, PhanSo &a);
    friend ostream& operator<<(ostream& os, PhanSo a);
};
istream& operator>>(istream& is, PhanSo &a)
{
    is>>a.tuSo>>a.mauSo;
    return is;
}
ostream& operator<<(ostream& os, PhanSo a)
{
    os<<a.tuSo<<"/"<<a.mauSo;
    return os;
}
PhanSo::PhanSo()
{
    tuSo=0;
    mauSo=1;
}
PhanSo::PhanSo(float a, float b)
{
    tuSo=a;
    mauSo=b;
}
PhanSo PhanSo::operator*(PhanSo a)
{
    PhanSo ans;
    ans.tuSo=tuSo*a.tuSo;
    ans.mauSo=mauSo*a.mauSo;
    return ans;
}
float PhanSo::operator-()
{
    return (mauSo) ? tuSo/mauSo : 0;
}
int main()
{
    PhanSo a,b;
    cin>>a>>b;
    PhanSo c=a*b;
    cout<<-c;
    fstream f("PHANSO.txt", ios::out);
    f<<c;
    f.close();
    return 0;
}
