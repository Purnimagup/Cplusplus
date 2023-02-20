#include<iostream>
using namespace std;

int main()
{

    int* p = NULL;
    p = new(nothrow) int ;

    if(!p)
    {
        cout<<"memory is not available"<<endl;

    }
    else
    {

    *p=25;
    cout<<" "<<*p<<endl;
    }
    float *f = new(nothrow) float(25.9);
    if(!p)
    {
        cout<<"not available"<<endl;
    }
    else
    {
        cout<<*f<<endl;
    }
    int n=5;
    int* q = new int[n];

    for(int i=0;i<n;i++)
    {
        q[i] = i+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<q[i]<<endl;
    }
    delete p;
    delete f;
    delete[] q;
}
