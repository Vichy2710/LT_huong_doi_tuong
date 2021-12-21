#include <bits/stdc++.h>

using namespace std;

class May
{
protected:
    char maMay[30], loai[30], nhan[30];
    float gia;
};
class MayTinh: public May
{
    float CPU, RAM, HDD;
public:
    void nhap(), xuat();
};
void MayTinh::nhap()
{
    cout<<"Ma may: "; fflush(stdin); gets(maMay);
    cout<<"Loai may: "; fflush(stdin); gets(loai);
    cout<<"Nhan hieu: "; fflush(stdin); gets(nhan);
    cout<<"Gia: "; cin>>gia;
    cout<<"CPU: "; cin>>CPU;
    cout<<"RAM: "; cin>>RAM;
    cout<<"HDD: "; cin>>HDD;
}
void MayTinh:: xuat()
{
    cout<<"Ma may: "<<maMay<<endl;
    cout<<"Loai: "<<loai<<endl;
    cout<<"Nhan: "<<nhan<<endl;
    cout<<"Gia: "<<gia<<endl;
    cout<<"CPU: "<<CPU<<endl;
    cout<<"RAM: "<<RAM<<endl;
    cout<<"HDD: "<<HDD<<endl;
}
int main()
{
    MayTinh k;
    k.nhap();
    k.xuat();
    return 0;
}
