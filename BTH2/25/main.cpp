#include <bits/stdc++.h>

using namespace std;

class OTo
{
    char maOTo[10];
    int giaMuaMoi;
    int namSuDung;
    float tiLeKhauHao;
public:
    void nhap(), xuat();
};
void OTo::nhap()
{
    fflush(stdin);
    cout<<"Nhap ma o to: "; gets(maOTo);
    cout<<"Nhap gia mua moi: "; cin>>giaMuaMoi;
    cout<<"Nhap nam su dung: "; cin>>namSuDung;
    cout<<"Nhap ti le khau hao: "; cin>>tiLeKhauHao;
    fflush(stdin);
}
void OTo::xuat()
{
    float giaTri=giaMuaMoi;
    for (int i=0;i<namSuDung;i++)
        giaTri = giaTri - giaTri*tiLeKhauHao;
    cout<<setw(10)<<left<<maOTo<<setw(20)<<left<<giaMuaMoi
    <<setw(20)<<left<<namSuDung<<setw(20)<<left<<tiLeKhauHao
    <<giaTri<<endl;
}
int main()
{
    OTo *a;
    int n;
    cout<<"Nhap so xe o to: "; cin>>n;
    a= new OTo[n];
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<".\n";
        a[i].nhap();
    }
    cout<<"\n-----Thong tin cac xe o to -----\n\n";
    cout<<setw(10)<<left<<"Ma o to"<<setw(20)<<left<<"Gia mua moi"
    <<setw(20)<<left<<"Nam su dung"<<setw(20)<<left<<"Ti le khau hao"
    <<"Gia xe hien nay"<<endl;
    for (int i=0;i<n;i++)
        a[i].xuat();
    return 0;
}
