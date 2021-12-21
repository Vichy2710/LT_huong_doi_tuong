#include <bits/stdc++.h>
#include<unistd.h>

using namespace std;

class Electronic
{
protected:
    float congSuat, dienAp;
public:
    Electronic(float congSuat, float dienAp);
};
Electronic:: Electronic(float congSuat, float dienAp)
{
    this->congSuat=congSuat;
    this->dienAp=dienAp;
}

class MayGiat : public Electronic
{
    float dungTich;
    char loai[30];
public:
    MayGiat(float congSuat, float dienAp, float dungTich, char *loai);
    void xuat();
};
MayGiat::MayGiat(float congSuat, float dienAp, float dungTich, char *loai) : Electronic(congSuat, dienAp)
{
    this->dungTich=dungTich;
    strcpy(this->loai,loai);
}
void MayGiat::xuat()
{
    cout<<"Cong suat: "<<congSuat<<endl;
    cout<<"Dien ap: "<<dienAp<<endl;
    cout<<"Dung tich: "<<dungTich<<endl;
    cout<<"Loai: "<<loai<<endl;
}

class TuLanh : public Electronic
{
    float dungTich;
    int soNgan;
public:
    TuLanh(float congSuat, float dienAp, float dungTich, int soNgan);
    void xuat();
};
TuLanh::TuLanh(float congSuat, float dienAp, float dungTich, int soNgan) : Electronic(congSuat, dienAp)
{
    this->dungTich=dungTich;
    this->soNgan=soNgan;
}
void TuLanh::xuat()
{
    cout<<"Cong suat: "<<congSuat<<endl;
    cout<<"Dien ap: "<<dienAp<<endl;
    cout<<"Dung tich: "<<dungTich<<endl;
    cout<<"So ngan: "<<soNgan<<endl;
}
int main()
{
    MayGiat a(90,3,4,"toshiba");
    cout<<"-Thong tin may giat:\n";
    a.xuat();

    cout<<endl;

    TuLanh b(1,6,675,543);
    cout<<"-Thong tin tu lanh:\n";
    b.xuat();
    return 0;
}
