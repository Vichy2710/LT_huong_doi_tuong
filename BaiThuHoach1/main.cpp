#include <bits/stdc++.h>

using namespace std;

class Hang
{
    char maHang[20], tenHang[30];
    float donGia;
    int soLuong, nam;
public:
    Hang();
    Hang(char *x, char *y,float z, int t, int r);
    friend istream &operator>>(istream &in, Hang &a);
    friend ostream &operator<<(ostream &out, Hang a);
    friend void timMatHang(Hang *a, int n, char *b);
    friend void sapXep(Hang *a, int n);
    friend void xoa1(Hang *&a, int &n);
    friend void xoa2(Hang *&a, int &n);
};
Hang::Hang()
{
    strcpy(maHang, "");
    strcpy(tenHang, "");
    donGia=0;
    soLuong=0;
    nam=0;
}
Hang::Hang(char *x, char *y,float z, int t, int r)
{
    strcpy(maHang, x);
    strcpy(tenHang, y);
    donGia=z;
    soLuong=t;
    nam=r;
}
istream& operator>>(istream &in, Hang &a)
{
    in.getline(a.maHang, 20);
    in.getline(a.tenHang, 30);
    in>>a.donGia>>a.soLuong>>a.nam;
    return in;
}
ostream& operator<<(ostream &out, Hang a)
{
    out<<"Ma hang: "<<a.maHang<<endl;
    out<<"Ten hang: "<<a.tenHang<<endl;
    out<<"Don gia: "<<a.donGia<<endl;
    out<<"So luong: "<<a.soLuong<<endl;
    out<<"Nam: "<<a.nam<<endl;
}
void timMatHang(Hang *a, int n, char *b)
{
    int check=0;
    for (int i=0;i<n;i++)
    {
        if(strcmpi(a[i].tenHang, b)==0)
        {
            check++;
        }
    }
    if(check==0)
        cout<<"Khong ton tai !"<<endl;
    else
        cout<<"Co ton tai !"<<endl;
}

void sapXep(Hang *a, int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if(a[i].soLuong * a[i].donGia > a[j].soLuong * a[j].donGia)
                swap(a[i], a[j]);
}

void xoa1(Hang *&a, int &n)
{
    int i=0;
    while(i<n)
    {
        if(strcmpi("h005", a[i].maHang)==0)
        {
            for (int j=i;j<n-1;j++)
                a[j]=a[j+1];
            n--;
        }
        else i++;
    }
    a=(Hang*) realloc(a,n*sizeof(Hang));
}
void xoa2(Hang *&a, int &n)
{
    int i=0;
    while(i<n)
    {
        if(a[i].donGia<20)
        {
            for (int j=i;j<n-1;j++)
                a[j]=a[j+1];
            n--;
        }
        else i++;
    }
    a=(Hang*) realloc(a,n*sizeof(Hang));
}
int main()
{
    Hang *a;
    int n; cin>>n;
    a= new Hang [n];
    for (int i=0;i<n;i++)
    {
        fflush(stdin);
        cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        cout<<a[i];
    }
    fstream file("HANG.DAT", ios::out);
    for (int i=0;i<n;i++)
    {
        file<<i+1<<".\n";
        file<<a[i];
    }
    file.close();

    timMatHang(a,n,"iphone 12");
    cout<<endl<<"Sap xep:"<<endl;
    sapXep(a,n);
    fstream fil("HANGSORT.DAT", ios::out);
    for (int i=0;i<n;i++)
    {
        fil<<i+1<<".\n";
        fil<<a[i];
    }
    fil.close();

    xoa1(a,n);
    cout<<"Mang sau khi xoa\n";
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        cout<<a[i];
    }
    xoa2(a,n);
    cout<<"Mang sau khi xoa\n";
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        cout<<a[i];
    }
    return 0;
}
