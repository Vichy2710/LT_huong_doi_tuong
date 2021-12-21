#include <bits/stdc++.h>

using namespace std;

class MaTran
{
    double **a;
    int n,m;
    //n: so dong, m: so cot
public:
    friend istream& operator>>(istream& is, MaTran &k);
    friend ostream& operator<<(ostream& os, MaTran k);
    MaTran operator-();
    MaTran operator+(MaTran x);
    MaTran operator-(MaTran x);
};
istream& operator>>(istream& is, MaTran &k)
{
    is>>k.n>>k.m;
    k.a=new double*[k.n];
    for (int i=0;i<k.n;i++)
    {
        k.a[i]= new double[k.m];
    }
    for (int i=0;i<k.n;i++)
        for (int j=0;j<k.m;j++)
            is>>k.a[i][j];
    return is;
}
ostream& operator<<(ostream& os, MaTran k)
{
    for (int i=0;i<k.n;i++)
    {
        for (int j=0;j<k.m;j++)
            os<<k.a[i][j]<<" ";
        os<<endl;
    }
    return os;
}
MaTran MaTran::operator-()
{
    MaTran ans;
    ans.n=n; ans.m=m;
    ans.a=new double*[n];
    for (int i=0;i<n;i++)
        ans.a[i]=new double[m];
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            ans.a[i][j]=-a[i][j];
    return ans;
}
MaTran MaTran::operator+(MaTran x)
{
    if(m==x.m && n==x.n)
    {
        MaTran ans;
        ans.n=n; ans.m=m;
        ans.a = new double*[n];
        for (int i=0;i<n;i++)
        ans.a[i]= new double[m];
        for(int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                ans.a[i][j] = a[i][j]+x.a[i][j];
        return ans;
    }
    else
    {
        MaTran ans;
        ans.m=0; ans.n=0;
        ans.a=NULL;
        return ans;
    }
}
MaTran MaTran::operator-(MaTran x)
{
    if(m==x.m && n==x.n)
    {
        MaTran ans;
        ans.n=n; ans.m=m;
        ans.a = new double*[n];
        for (int i=0;i<n;i++)
        ans.a[i]= new double[m];
        for(int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                ans.a[i][j] = a[i][j]-x.a[i][j];
        return ans;
    }
    else
    {
        MaTran ans;
        ans.m=0; ans.n=0;
        ans.a=NULL;
        return ans;
    }
}

int main()
{
    MaTran a,b;
    cout<<"Nhap a:\n";
    cin>>a; //cout<<a<<endl;
    cout<<"Nhap b:\n";
    cin>>b; //cout<<b<<endl;
    a=-a;
    b=-b;
    cout<<a<<endl<<b<<endl;
    MaTran tong=a+b, hieu=a-b;
    cout<<tong<<endl<<hieu<<endl;

    fstream f("MATRAN.txt", ios::out);
    f<<a<<endl<<b<<endl;
    f<<tong<<endl<<hieu<<endl;
    f.close();
    return 0;
}
