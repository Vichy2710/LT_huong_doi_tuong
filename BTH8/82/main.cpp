#include <bits/stdc++.h>

using namespace std;

class SoPhuc
{
    float thuc, ao;
public:
    SoPhuc();
    SoPhuc(float a, float b);
    friend istream& operator>>(istream& is, SoPhuc &a);
    friend ostream& operator<<(ostream& os, SoPhuc a);
    SoPhuc operator+(SoPhuc a);
    SoPhuc operator-(SoPhuc a);
};
SoPhuc::SoPhuc()
{
    thuc=0;
    ao=0;
}
SoPhuc::SoPhuc(float a, float b)
{
    thuc=a;
    ao=b;
}
istream& operator>>(istream& is, SoPhuc &a)
{
    is>>a.thuc>>a.ao;
    return is;
}
ostream& operator<<(ostream& os, SoPhuc a)
{
    if(a.ao>=0)
        os<<a.thuc<<" + i*"<<a.ao;
    else
        os<<a.thuc<<" - i*"<<-a.ao;
    return os;
}
SoPhuc SoPhuc::operator+(SoPhuc a)
{
    SoPhuc ans;
    ans.thuc=thuc+a.thuc;
    ans.ao=ao+a.ao;
    return ans;
}
SoPhuc SoPhuc::operator-(SoPhuc a)
{
    SoPhuc ans;
    ans.thuc=thuc-a.thuc;
    ans.ao=ao-a.ao;
    return ans;
}
int main()
{
    SoPhuc a, b;
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    SoPhuc c=a+b, d=a-b;
    cout<<c<<endl<<d;

    fstream file("SoPhuc.txt", ios::out);
    file<<c<<endl<<d;
    file.close();
    return 0;
}
