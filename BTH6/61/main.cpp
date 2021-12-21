#include <bits/stdc++.h>
#include<unistd.h>
using namespace std;

class Person
{
protected:
    char hoTen[30], ngaySinh[20], queQuan[40];
};
class KySu : public Person
{
    char nganh[30];
    int namTN;
public:
    void nhap(), xuat();
    friend void thongTinKS(KySu *a, int n);
};
void KySu::nhap()
{
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
    cout<<"Nhap ngay sinh: "; fflush(stdin); gets(ngaySinh);
    cout<<"Nhap que quan: "; fflush(stdin); gets(queQuan);
    cout<<"Nhap nganh: "; fflush(stdin); gets(nganh);
    cout<<"Nhap nam TN: "; cin>>namTN;
}
void KySu::xuat()
{
    cout<<setw(25)<<left<<hoTen<<setw(15)<<left<<ngaySinh
    <<setw(30)<<left<<queQuan<<setw(20)<<left<<nganh<<namTN<<endl;
}

void thongTinKS(KySu *a, int n)
{
    int tmp=a[0].namTN;
    for(int i=1;i<n;i++)
        if(a[i].namTN>tmp)
            tmp=a[i].namTN;
    cout<<"\n\n----Danh Sach Ky Su Tot Nghiep Gan Day----\n\n";
    cout<<setw(25)<<left<<"ho ten"<<setw(15)<<left<<"Ngay sinh"
    <<setw(30)<<left<<"Que quan"<<setw(20)<<left<<"Nganh"<<"Nam TN"<<endl;
    for (int i=0;i<n;i++)
        if(a[i].namTN==tmp)
            a[i].xuat();
}
int main()
{
    int n;
    KySu *a;
    cout<<"Nhap so ky su: "; cin>>n;
    a=new KySu[n];
    for (int i=0; i<n;i++)
    {
        cout<<i+1<<".\n";
        a[i].nhap();
    }
    cout<<"\n\n----Danh Sach Ky Su----\n\n";
    cout<<setw(25)<<left<<"Ho ten"<<setw(15)<<left<<"Ngay sinh"
    <<setw(30)<<left<<"Que quan"<<setw(20)<<left<<"Nganh"<<"Nam TN"<<endl;
    for (int i=0;i<n;i++)
        a[i].xuat();

    sleep(2);
    thongTinKS(a,n);
    return 0;
}
