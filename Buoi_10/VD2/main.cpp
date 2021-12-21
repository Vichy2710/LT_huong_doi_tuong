#include <bits/stdc++.h>

using namespace std;
template <class T> class Matrix;
template <class T> istream& operator>>(istream &in, Matrix<T> &mat);
template <class T> ostream& operator<<(ostream &os, Matrix<T> mat);
template <class T> class Matrix
{
    T **a;
    int n,m;
public:
    T operator!(); //tim max
    friend istream& operator>> <>(istream &in, Matrix<T> &mat);
    friend ostream& operator<< <>(ostream &os, Matrix<T> mat);
};
template <class T> T Matrix<T>:: operator!()
{
    T m=a[0][0];
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            if(m<a[i][j])
                m=a[i][j];
    return m;
}
template <class T> istream &operator>>(istream& in, Matrix<T> &mat)
{
    in>>mat.n>>mat.m;
    mat.a= new T*[mat.n];
    for (int i=0;i<mat.n;i++)
        mat.a[i]= new int[mat.m];
    for (int i=0;i<mat.n;i++)
        for (int j=0;j<mat.m;j++)
            in>>mat.a[i][j];
    return in;

}
template <class T> ostream &operator<<(ostream &os, Matrix<T> mat)
{
    for (int i=0;i<mat.n;i++)
    {
        for (int j=0;j<mat.m;j++)
            os<<mat.a[i][j]<<" ";
        cout<<endl;
    }
    return os;
}
int main()
{
    Matrix<int> a;
    cin>>a;
    cout<<a;
    cout<<!a;
    return 0;
}
