#include<iostream>
using namespace std;

 int main(){
     int n;
     cout<<"enter random no";
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
     cin>>a[i];}
     int mx= INT_MIN;
     int mn=INT_MAX;
     int evensum=0;
        int oddsum=0;
        int oddcount=0;
        int evencount=0;
     for(int i=0;i<n;i++){
        mx= max(mx,a[i]);
        mn=min(mn,a[i]);

        if(a[i]%2==0){
            evensum=evensum+a[i];
            evencount = evencount+i;
        }
        else{
            oddsum=oddsum+a[i];
            oddcount = oddcount+i;
        }
     }
cout<<"THE LARGEST ELEMENT  "<< mx<<endl;
cout<<"the smallest element  "<<mn<<endl;
cout<<"the even count  number "<<evencount<<endl;
cout<<"the even odd count  "<<oddcount<<endl;
cout<<"the even sum is  "<<evensum<<endl;
cout<<"the odd sum is  "<<oddsum<<endl;
 return 0;
 }
