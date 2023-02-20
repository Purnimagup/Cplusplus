#include<iostream>
using namespace std;

class A{   //base class
public:
       int add()
    {
        cout<<"gupta"<<endl;
        return 0;
    }
    int sum(int a,int b)
    {
        return a+b;
    }
    int sum(int a,int b,int c)
    {
        return a+b+c;
    }
};
class B : public A  //derived class
{
public:
    int a;
    int b;

public:
     virtual int add()
    {
        cout<<"purnima"<<endl;
        return 0;
    }
    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output = " <<value2-value1<<endl;
    }
    void operator() ()
    {
        cout<<"main bracket hoon"<<endl;
    }
};

int main()
{
  B b;
    p.add();

    return 0;;
}
   /* A j;
    cout<<j.sum(6,9)<<endl;
    cout<<j.sum(9,0,7)<<endl;

    return 0;
}*/

