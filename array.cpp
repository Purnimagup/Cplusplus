#include<iostream>
using namespace std;

int main()
{
int n;
               cout<<"enter size of array"<<endl;
                cin>>n;
                int a[n];
                cout<<"enter the element of array"<<endl;
                for(int i=0;i<n;i++){
                   cin>>a[i];
                 }
         int maxno=INT_MIN;
         int minno=INT_MAX;
         for(int i=0;i<n;i++){
            maxno=max(maxno,a[i]);
            minno=min(minno,a[i]);
         }
         cout<<maxno<< "  "<<minno<<endl;

}
