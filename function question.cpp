#include<iostream>
#include<math.h>
using namespace std;

int fibonacci(int n)
{
    if(n<=2)
    {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int pallindrome(int n)
{
    int sum =0 ;
    while(n!=0)
    {
        int lastdigit=n%10;
        sum += lastdigit;
        n=n/10;
    }
    cout<<sum;
}

int main()
{
   int n ,temp,sum =0 ;
   cout<<"enter the value of n"<<endl;
   cin>>n;
  /* cout<<factorial(n)<<" ";
   cout<<endl;
   cout<<fibonacci(n)<<" ";
   cout<<pallindrome(n)<<endl;
   while(n>0)
   {
       temp=n%10;
       sum += pow(temp,3);
       n=n/10;
   }
   if(n==sum)
   {
       cout<<"it is armstrong"<<endl;
   }
   else
{
    cout<<"it's not armstrong"<<endl;
}
*/
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
for(int i=1;i<=5;i++)
{
    for(int j=5;j>=i;j--)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
for(int i=5;i>=1;i--)
{
    for(int j=1;j<=i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
   return 0;
}
