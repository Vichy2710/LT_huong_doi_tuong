#include <bits/stdc++.h>
using namespace std;
class TamGiac
{
    float a,b,c;
public:
    void xuat();
    float dienTich();
    TamGiac();
    TamGiac(float x, float y, float z);
};
void TamGiac::xuat()
{
    cout<<"a="<<this->a<<endl;
    cout<<"b="<<this->b<<endl;
    cout<<"c="<<this->c<<endl;
}
float TamGiac::dienTich()
{
    float p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
TamGiac::TamGiac()
{
    a=b=c=0;
}
TamGiac::TamGiac(float x, float y, float z)
{
    a=x;
    b=y;
    c=z;
}
using namespace std;

int main()
{
    TamGiac k(3,5,7);
    //k: doi tuong thuoc lop TamGiac
//    k.xuat();
//    cout<<"Dien tich: "<<k.dienTich();

//    TamGiac *p;
//    p la 1 con tro doi tuong thuoc lop TamGiac
//    - Tao ra 1 doi tuong khong ten, cho con tro tro toi doi tuong do
//    p = new TamGiac;   khac voi    p = TamGiac;
//    p->xuat(); 0 0 0
//
//    p = new TamGiac[10];
//    con tro + cap phat bo nho = mang
//    for (int i=0;i<n;i++)
//        p[i].xuat();

    TamGiac q(2,5,4);

    k.xuat();
    q.xuat();

    return 0;
}
