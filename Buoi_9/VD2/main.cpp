#include <bits/stdc++.h>

using namespace std;

class Hang
{
    char maHang[20], tenHang[30], mauSac[20];
    float donGia,  trongLuong;
public:
    friend istream& operator>>(istream& in, Hang &a);
    friend ostream& operator<<(ostream& out, Hang a);
};

istream& operator>>(istream& in, Hang &a)
{
    in.getline(a.maHang,20);
    in.getline(a.tenHang,30);
    in>>a.donGia;
    in>>a.trongLuong;
    in.ignore();
    in.getline(a.mauSac,20);
    return in;
}
ostream& operator<<(ostream& out, Hang a)
{
    out<<a.maHang<<endl;
    out<<a.tenHang<<endl;
    out<<a.donGia<<endl;
    out<<a.trongLuong<<endl;
    out<<a.mauSac<<endl;
    return out;
}
int main()
{
    Hang *a;
    int n;
    cout<<"n = "; cin>>n;
    a=new Hang[n];
    fflush(stdin);
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        cin>>a[i];
    }
    //Xuat ra man hinh
    cout<<"\n---Thong tin cac mat hang:\n";
    for (int i=0;i<n;i++)
    {

        cout<<a[i];
    }

    //Xuat ra file
    fstream f("ABS.DAT", ios::out);
    f<<n<<endl;
    for (int i=0;i<n;i++)
    {

        f<<a[i];
    }
    f.close();

//    Doc tu file
    fstream fi("ABS.DAT", ios::in);
    fi>>n;
    fi.ignore();
    a=new Hang[n];
    for (int i=0;i<n;i++)
    {
        fi>>a[i];
    }

    fi.close();

    cout<<"\n---Doc tu file:\n";
    cout<<n<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        cout<<a[i];
    }
    return 0;
}
