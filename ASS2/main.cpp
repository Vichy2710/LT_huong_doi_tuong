#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

class LopHoc;
class Nguoi
{
protected:
    char hoTen[30], ngaySinh[30], queQuan[30];
public:
    void nhap(), xuat();
};
void Nguoi::nhap()
{
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
    cout<<"Nhap ngay sinh: "; fflush(stdin); gets(ngaySinh);
    cout<<"Nhap que quan: "; fflush(stdin); gets(queQuan);
}
void Nguoi::xuat()
{
    cout<<setw(20)<<left<<hoTen<<setw(15)<<left<<ngaySinh
    <<setw(15)<<left<<queQuan;
}

class SinhVien : public Nguoi
{
    char maSV[20], nganh[20];
    int khoaHoc;
public:
    void nhap(), xuat();
    friend int DemSinhVienKhoa11(LopHoc a);
    friend void SapXepTheoKhoaHoc(LopHoc a);
};
void SinhVien::nhap()
{
    Nguoi::nhap();
    cout<<"Nhap ma sv: "; fflush(stdin); gets(maSV);
    cout<<"Nhap nganh: "; fflush(stdin); gets(nganh);
    cout<<"Nhap khoa hoc: "; cin>>khoaHoc;
}
void SinhVien::xuat()
{
    Nguoi::xuat();
    cout<<setw(10)<<left<<maSV<<setw(20)<<left<<nganh
    <<khoaHoc<<endl;
}

class LopHoc
{
    char maLH[20], tenLH[30], ngayMo[20];
    SinhVien *x;
    int n;
    char giaoVien[30];
public:
    void nhap(), xuat();
    friend int DemSinhVienKhoa11(LopHoc a);
    friend void SapXepTheoKhoaHoc(LopHoc a);
};
void LopHoc::nhap()
{
    cout<<"Nhap ma lop hoc: "; fflush(stdin); gets(maLH);
    cout<<"Nhap ten lop hoc: "; fflush(stdin); gets(tenLH);
    cout<<"Nhap ngay mo: "; fflush(stdin); gets(ngayMo);
    cout<<"Nhap giao vien: "; fflush(stdin); gets(giaoVien);
    cout<<"Nhap so sinh vien: "; cin>>n;
    x= new SinhVien[n];
    cout<<"\nNhap thong tin tung sinh vien:\n";
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        x[i].nhap();
    }

}
void LopHoc::xuat()
{
    cout<<"Ma lop hoc: "<<maLH<<endl;
    cout<<"Ten lop hoc: "<<tenLH<<endl;
    cout<<"Ngay mo: "<<ngayMo<<endl;
    cout<<"Giao vien: "<<giaoVien<<endl;
    cout<<"Danh sach sinh vien: \n";
    cout<<setw(20)<<left<<"Ho ten"<<setw(15)<<left<<"Ngay sinh"
    <<setw(15)<<left<<"Que quan";
    cout<<setw(10)<<left<<"Ma sv"<<setw(20)<<left<<"Nganh"
    <<"Khoa hoc"<<endl;
    for (int i=0;i<n;i++)
    {
        x[i].xuat();
    }
}

int DemSinhVienKhoa11(LopHoc a)
{
    int dem=0;
    for (int i=0;i<a.n;i++)
        if (a.x[i].khoaHoc==11)
            dem++;
    return dem;
}
void SapXepTheoKhoaHoc(LopHoc a)
{
    for (int i=0;i<a.n-1;i++)
        for (int j=i+1;j<a.n;j++)
            if(a.x[i].khoaHoc > a.x[j].khoaHoc)
                swap(a.x[i], a.x[j]);
}
int main()
{
    LopHoc a;
    cout<<"Nhap thong tin lop hoc: \n";
    a.nhap();
    cout<<"\n\n----thong tin lop hoc----\n";
    a.xuat();
    sleep(2);

    cout<<"\nCo "<<DemSinhVienKhoa11(a)<<" sinh vien khoa 11.\n";
    sleep(2);

    cout<<"\nThong tin lop hoc sau khi sap xep danh sach sinh vien theo chieu tang dan cua khoa hoc: \n\n";
    SapXepTheoKhoaHoc(a);
    a.xuat();

    return 0;
}
