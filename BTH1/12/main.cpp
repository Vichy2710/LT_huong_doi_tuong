#include<bits/stdc++.h>
using namespace std;

class HCN
{
    float D,R;
public:
    void nhap(), ve();
    float dienTich(), chuVi();
};
void HCN::nhap()
{
    cout<<"Chieu dai D = "; cin>>D;
    cout<<"Chieu rong R = "; cin>>R;
}
void HCN::ve()
{
    for (int i=0;i<int(R);i++)
    {
        for (int j=0;j<int(D);j++)
            cout<<"*";
        cout<<endl;
    }
}
float HCN::dienTich()
{
    return D*R;
}
float HCN::chuVi()
{
    return (D+R)*2;
}

int main()
{
    HCN x;
    x.nhap();
    x.ve();
    cout<<"\nDien tich: "<<x.dienTich();
    cout<<"\nChu vi: "<<x.chuVi();
}
