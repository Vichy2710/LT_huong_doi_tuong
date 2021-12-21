#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
    char maSV[10], hoTen[30];
    float diemToan, diemLy, diemHoa;
public:
    void nhap(), xuat();
    friend void sapXep(SinhVien *a, int n);
};
void SinhVien::nhap()
{
    cout<<"Nhap ma sinh vien: "; fflush(stdin); gets(maSV);
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
    cout<<"Nhap diem toan: "; cin>>diemToan;
    cout<<"Nhap diem ly: "; cin>>diemLy;
    cout<<"Nhap diem hoa: "; cin>>diemHoa;
}
void SinhVien::xuat()
{
    cout<<setw(10)<<left<<maSV<<setw(30)<<left<<hoTen<<setw(15)
    <<left<<diemToan<<setw(15)<<left<<diemLy<<setw(15)<<left<<diemHoa
    <<diemHoa+diemLy+diemToan<<endl;

}

void sapXep(SinhVien *a, int n)
{
    float tmp[n];
    for (int i=0;i<n;i++)
    {
        tmp[i]=a[i].diemHoa+a[i].diemLy+a[i].diemToan;
    }
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if(tmp[i]>tmp[j])
                swap(a[i],a[j]);
}
int main()
{
    SinhVien *a;
    int n;
    cout<<"Nhap so sinh vien: "; cin>>n;
    a=new SinhVien[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        a[i].nhap();
    }
    sapXep(a,n);
    cout<<"\n\n----Danh sach sinh vien---\n";
    cout<<setw(10)<<left<<"Ma sv"<<setw(30)<<left<<"Ho ten"<<setw(15)
    <<left<<"Diem Toan"<<setw(15)<<left<<"Diem Ly"<<setw(15)<<left<<"Diem Hoa"
    <<"Tong diem"<<endl;
    for (int i=0;i<n;i++)
        a[i].xuat();
    return 0;
}
