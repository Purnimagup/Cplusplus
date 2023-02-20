#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=1;j<5-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
                if((i+j)%2==0){
            cout<<"1"<<" ";
        }
        else{
            cout<<"0"<<" ";
        }
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<5;i++){
        for(int j=1;j<5-i;j++)
        {
                cout<<" ";

        }
        for(int j=1;j<=5;j++){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
     for(int i=1;i<=5;i++){
            int j;
        for( j=1;j<=5-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<=5;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=5+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=5;i++){
            int j;
        for( j=1;j<=5-i;j++){
            cout<<"  ";
        }

        for(;j<=5;j++){
            cout<<"*"<<" ";
        }

        for(;j<=5+i-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        }
         for(int i=5;i>=1;i--){
            int j;
        for( j=1;j<=5-i;j++){
            cout<<"  ";
        }

        for(;j<=5;j++){
            cout<<"*"<<" ";
        }

        for(;j<=5+i-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        }
        cout<<endl;
         for(int i=1;i<=3;i++){

        for( int j=1;j<=9;j++){
                if(((i+j)%4==0)||(i==2&&j%4==0))
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
          }
        cout<<endl;
        }
        cout<<endl;
        for(int i=1;i<=5;i++){
            int j;
        for( j=1;j<=i;j++){
            cout<<"*";
        }
        int space=5*2-2*i;
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for( j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        }
        for(int i=5;i>=1;i--){
            int j;
        for( j=1;j<=i;j++){
            cout<<"*";
        }
        int space=5*2-2*i;
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for( j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        }
return 0;
}
