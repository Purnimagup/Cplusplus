#include<iostream>
using namespace std;

int main()
{
   /* int a=8;
    int* ptr =&a;
    *ptr = 80;
    cout<<a<<ptr<< " "<<&a<<*ptr<<endl;
    //80 5978 65758 80

    int **dptr  = &ptr;
    cout<<dptr<<" "<<**dptr<<" "<<&dptr<<" "<<endl;
*/    //dynamic memory allocation in array

    int n;
    int* a = new int(8);
    int* arr = 0;
    cout<<*a<<endl;
    cout<<"enter the array of size"<<endl;
    cin>>n;
    arr = new int[10];

    cout<<"enter the value of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    delete []arr;

    return 0;
}
