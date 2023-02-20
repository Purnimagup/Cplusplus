#include<iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a,int b)
    {
        return a+b;
    }
    int sumrealcomplex(complex o1,complex o2)
    {
        return(o1.a+o2.a)
    }
};

class complex
{
    int a,b;
    friend int calculator :: sumrealcomplex(complex o1,complex o2);
public:
    void setnumber(int n1,int n2 )
    {
        a=n1;
        b=n2;

    }
    void getnumber()
    {
        cout<<"your number is "<<a<<" +"<<b<<"i"<<endl;

    }

    friend complex sumcomplex(complex o1,complex o2);
};
complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    complex c1,c2,sum;
    c1.setnumber(1,4);
    c1.getnumber();
    c2.setnumber(5,6);
    c2.getnumber();

    sum=sumcomplex(c1,c2);
    sum.getnumber();
    return 0;
}
