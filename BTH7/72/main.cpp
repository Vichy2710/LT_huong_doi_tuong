#include <bits/stdc++.h>

using namespace std;
class School
{
    char name[30], date[20];
    friend class Student;
    friend class Faculty;
};

class Faculty
{
    char name[30], date[20];
    School x;
public:
    void input(), output();
    friend class Student;
};
void Faculty::input()
{
    cout<<"Enter name of school: "; fflush(stdin); gets(x.name);
    cout<<"Enter date of school: "; fflush(stdin); gets(x.date);
    cout<<"Enter name of faculty: "; fflush(stdin); gets(name);
    cout<<"Enter date of faculty: "; fflush(stdin); gets(date);
}
void Faculty::output()
{
    cout<<" - Name of school: "<<x.name<<endl;
    cout<<" - Date of school: "<<x.date<<endl;
    cout<<" - Name of faculty: "<<name<<endl;
    cout<<" - Date of faculty: "<<date<<endl;
}

class Person
{
protected:
    char name[30], birth[20], address[40];
public:
    void input(), output();
    Person();
};
Person::Person()
{
    strcpy(name,"");
    strcpy(birth,"");
    strcpy(address,"");
}
void Person::input()
{
    cout<<"Enter name of person: "; fflush(stdin); gets(name);
    cout<<"Enter birth of person: "; fflush(stdin); gets(birth);
    cout<<"Enter address of person: "; fflush(stdin); gets(address);
}
void Person::output()
{
    cout<<" - Name of person: "<<name<<endl;
    cout<<" - Birth: "<<birth<<endl;
    cout<<" - Address: "<<address<<endl;
}

class Student: public Person
{
    Faculty y;
    char class_[10];
    float score;
public:
    void input(), output();
    Student();
};
Student::Student():Person()
{
    strcpy(y.name, "");
    strcpy(y.date, "");
    strcpy(y.x.date, "");
    strcpy(y.x.name, "");
    strcpy(class_, "");
    score=0;
}
void Student::input()
{
    Person::input();
    y.input();
    cout<<"Enter class: "; fflush(stdin); gets(class_);
    cout<<"Enter score: "; cin>>score;
}
void Student::output()
{
    Person::output();
    y.output();
    cout<<" - Class: "<<class_<<endl;
    cout<<" - Score: "<<score<<endl;
}
int main()
{
    Student a;
    cout<<"--Enter information of a student:\n";
    a.input();
    cout<<"\n---Information---\n";
    a.output();
    return 0;
}
