#include <bits/stdc++.h>

using namespace std;

class Mang
{
    float *value;
    int n;
public:
    friend istream& operator>>(istream& is, Mang &a);
    friend ostream& operator<<(ostream& os, Mang a);
    Mang operator++();
    Mang operator--();

};
istream& operator>>(istream& is, Mang &a)
{
    is>>a.n;
    a.value = new float[a.n];
    for (int i=0;i<a.n;i++)
        is>>a.value[i];
    return is;
}
ostream& operator<<(ostream& os, Mang a)
{
    for (int i=0;i<a.n;i++)
        os<<a.value[i]<<" ";
    return os;
}
Mang Mang::operator++()
{
    Mang ans;
    ans.n=n;
    ans.value= new float[n];
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if(value[i]>value[j])
                swap(value[i],value[j]);
    for (int i=0;i<n;i++)
        ans.value[i]=value[i];
    return ans;
}
Mang Mang::operator--()
{
    Mang ans;
    ans.n=n;
    ans.value= new float[n];
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if(value[i]<value[j])
                swap(value[i],value[j]);
    for (int i=0;i<n;i++)
        ans.value[i]=value[i];
    return ans;
}
int main()
{
    Mang a;
    cin>>a; cout<<a<<endl;
    cout<<++a<<endl<<--a;
    fstream f("MANG.txt", ios::out);
    f<<a<<endl;
    f<<++a<<endl<<--a;
    f.close();
    return 0;
}
