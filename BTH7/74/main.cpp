#include <bits/stdc++.h>

using namespace std;

class Nguoi
{
protected:
    char hoTen[30];
    int tuoi;
public:
    void nhap(), xuat();
};
void Nguoi::nhap()
{
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
    cout<<"Nhap tuoi: "; cin>>tuoi;
}
void Nguoi::xuat()
{
    cout<<" - Ho ten: "<<hoTen<<endl;
    cout<<" - Tuoi: "<<tuoi<<endl;
}

class BenhVien
{
    char tenBenhVien[30], diaChi[40];
    Nguoi giamDoc;
    friend class BenhNhan;
};

class BenhNhan: public Nguoi
{
    char maBenhNhan[20], tienSu[40], chuanDoan[40];
    BenhVien bv;
public:
    void nhap(), xuat();
    friend int Bonus1(BenhNhan *a, int n);
    friend void Bonus2(BenhNhan *a, int n);
};
void BenhNhan::nhap()
{
    cout<<"Nhap ten benh vien: "; fflush(stdin); gets(bv.tenBenhVien);
    cout<<"Nhap dia chi: "; fflush(stdin); gets(bv.diaChi);
    cout<<"Nhap giam doc: \n";
    bv.giamDoc.nhap();
    cout<<"Nhap ma benh nhan: "; fflush(stdin); gets(maBenhNhan);
    Nguoi::nhap();
    cout<<"Nhap tien su: "; fflush(stdin); gets(tienSu);
    cout<<"Nhap chuan doan: "; fflush(stdin); gets(chuanDoan);
}
void BenhNhan::xuat()
{
    cout<<" - Ten benh vien: "<<bv.tenBenhVien<<endl;
    cout<<" - Dia chi: "<<bv.diaChi<<endl;
    cout<<" - Giam doc: "<<endl;
    bv.giamDoc.xuat();
    cout<<" - Ma benh nhan: "<<maBenhNhan<<endl;
    Nguoi::xuat();
    cout<<" - Tien su: "<<tienSu<<endl;
    cout<<" - Chuan doan: "<<chuanDoan<<endl;
}

int Bonus1(BenhNhan *a, int n)
{
    int cnt=0;
    for (int i=0;i<n;i++)
        if(a[i].tuoi>30)
            cnt++;
    return cnt;
}
void Bonus2(BenhNhan *a, int n)
{
    for (int i=0;i<n;i++)
        if(strcmpi(a[i].maBenhNhan,"BN01")==0)
            a[i].tuoi=20;
}
int main()
{
    BenhNhan *bn;
    int n;
    cout<<"Nhap so luong benh nhan: "; cin>>n;
    bn= new BenhNhan[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        bn[i].nhap();
    }
    cout<<"\n---Thong tin cac benh nhan---\n";
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        bn[i].xuat();
    }

    cout<<"\n\nSo benh nhan lon hon 30 tuoi: "<<Bonus1(bn,n);
    Bonus2(bn,n);
    cout<<"\n---Thong tin cac benh nhan sau khi sua du lieu---\n";
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        bn[i].xuat();
    }
    return 0;
}
