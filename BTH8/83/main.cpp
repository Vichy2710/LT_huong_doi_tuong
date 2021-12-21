#include <bits/stdc++.h>

using namespace std;

class TamThucBac2
{
    float a,b,c;
public:
    TamThucBac2();
    TamThucBac2(float a1,float b1, float c1);
    friend istream& operator>>(istream& is, TamThucBac2 &a);
    friend ostream& operator<<(ostream& os, TamThucBac2 a);
    TamThucBac2 operator-();
    TamThucBac2 operator+(TamThucBac2 x);
    TamThucBac2 operator-(TamThucBac2 x);
};
TamThucBac2::TamThucBac2()
{
    a=0;
    b=0;
    c=0;
}
TamThucBac2::TamThucBac2(float a1, float b1, float c1)
{
    a=a1;
    b=b1;
    c=c1;
}
istream& operator>>(istream& is, TamThucBac2 &a)
{
    is>>a.a>>a.b>>a.c;
    return is;
}
ostream& operator<<(ostream& os, TamThucBac2 a)
{
    os<<a.a<<"x"<<(char)253;
    if(a.b>=0)
        os<<" + "<<a.b<<"x";
    else
        os<<" - "<<-a.b<<"x";
    if(a.c>=0)
        os<<" + "<<a.c;
    else
        os<<" - "<<-a.c;
    os<<" = 0";
    return os;
}
TamThucBac2 TamThucBac2::operator-()
{
    TamThucBac2 k;
    k.a=-a;
    k.b=-b;
    k.c=-c;
    return k;
}
TamThucBac2 TamThucBac2::operator+(TamThucBac2 x)
{
    TamThucBac2 ans;
    ans.a=a+x.a;
    ans.b=b+x.b;
    ans.c=c+x.c;
    return ans;
}
TamThucBac2 TamThucBac2::operator-(TamThucBac2 x)
{
    TamThucBac2 ans;
    ans.a=a-x.a;
    ans.b=b-x.b;
    ans.c=c-x.c;
    return ans;
}
int main()
{
    TamThucBac2 a(1,90,2), b(-8,-10,2);
    cout<<a<<endl<<b<<endl;
    a=-a;
    b=-b;
    cout<<a+b<<endl<<a-b<<endl;

    fstream f("TamThucBac2.txt", ios::out);
    f<<a+b<<endl<<a-b<<endl;
    f.close();
    return 0;
}
