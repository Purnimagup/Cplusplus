#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int n){
return n*(n+1)/2;
}
bool check(int x,int y,int z){
   int a= max(x,max(y,z));
   int b,c;
   if(a==x){
    b=y;
    c=z;
   }
   else if(a==y){
    b=x;
    c=z;
   }
   else{
    b=x;c=y;
   }
   if(a*a == b*b + c*c){
    return true;
   }
   else{
    return false;
   }
}

int main(){
    cout<<sum (5);
    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"pythagorus triplet"<<endl;
    }
    else{
        cout<<"not a pythagorus triple"<<endl;
    }
return 0;
}
