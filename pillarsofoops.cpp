#include<iostream>
using namespace std;

//enscapsulation  and inheritance

class a
{
public:
    void abc()
{
    cout<<'a'<<endl;
}
};
class b
{
public:
    void abc()
    {
        cout<<'b'<<endl;
    }
};
class c :public a,public b
{
public :
    void n()
    {
        cout<<"h"<<endl;
    }
};

class human
{
public:
    int height;
    int wieght;
protected:

    int age;

    int getwieght()
    {
        return wieght;
    }
    int setwieght(int w)
    {
        wieght=w;
    }
  /*  void print()
    {
     cout<<height<<endl;
     cout<<age<<endl;
     cout<<wieght<<endl;
     cout<<color<<endl;
    }*/
};

class male: protected human
{
protected:
    string color;

    void sleep()
    {
        cout<<"sleep"<<endl;
    }
public:

    int getheight()
    {
        return height;
    }
};

class female:private human
{
public :
    int health;

};
class student
{
private:
    string name;
    int age;
    int height;

public:
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    int getheight()
    {
        return height;
    }
    void setage(int a)
    {
        age=a;
    }
    void setname(string n)
    {
        name=n;
    }
    void setheight(int h)
    {
        height=h;
    }
    student(string name,int age,int height)
    {
        this->name=name;
        this->age=age;
        this->height=height;
        cout<<"parameterized constructor"<<endl;
    }
   /* void print()
    {
     cout<<height<<endl;
     cout<<age<<endl;
     cout<<wieght<<endl;
     cout<<color<<endl;
    }*/
};

int main()
{
    c ram;
    ram.a::abc();

 //  female r;
   //cout<<r.height<<endl;

   female f;
   cout<<f.health<<endl;


  /* r.height=9;
   r.age=99;
   r.wieght=34;
   r.color="red";
   r.sleep();
   cout<<r.height<<endl;
     cout<<r.age<<endl;
     cout<<r.wieght<<endl;
     cout<<r.color<<endl;
    // cout<<r.sleep()<<endl;
    return 0;*/
}
