#include <bits/stdc++.h>

using namespace std;

class Person
{
protected:
    char hoTen[30];
    int tuoi;
    char diaChi[30];
public:
    void nhap(), xuat();
};
void Person::nhap()
{
    cout<<"Ho ten: "; fflush(stdin); gets(hoTen);
    cout<<"Tuoi: "; cin>>tuoi;
    cout<<"Dia chi: "; fflush(stdin); gets(diaChi);
}
void Person::xuat()
{
    cout<<setw(15)<<left<<hoTen<<setw(5)<<left<<tuoi<<setw(15)<<left<<diaChi;
}

class Student : public Person /*, public ABC*/
{
    char lop[30], nganh[30], truong[30];
public:
    void nhap(), xuat();
};
void Student::nhap()
{
    Person::nhap();
    cout<<"Lop: "; fflush(stdin); gets(lop);
    cout<<"Nganh: "; fflush(stdin); gets(nganh);
    cout<<"Truong: "; fflush(stdin); gets(truong);
}
void Student::xuat()
{
    Person::xuat();
    cout<<setw(15)<<left<<lop<<setw(5)<<left<<nganh<<setw(15)<<left<<truong<<endl;
}

int main()
{
    Student a;
    a.nhap();
    a.xuat();

    return 0;
}
