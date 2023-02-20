#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size and value of array"<<endl;
    cin>>n;

    int i,a[5];

    try
    {

        for(int i=0;i<n;i++)
    {
        if( i>5)
        {
            throw a[i];
        }
        cin>>a[i];

    }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    catch(int ex)
    {

        cout<<"this  is not exit"<<endl;
    }
   /* int n ,d;

    cout<<"enter the value"<<endl;
    cin>>n>>d;
    int result;
    try
    {
        if(d==0)
        {
            throw d;
        }
        result = n/d;
    }
    catch(int ex)
    {
        cout<<"Exception : divide by zero is not defined"<<endl;
    }
    cout<<"result = "<<result<<endl;*/

    return 0;
}
