#include<iostream>
using namespace std;

int global=9; //global variable
void sum()
{
    cout<<global<<endl;
}

int main()
{
    int global=0; //locall
    global=72;
    sum();
    cout<<global;

    return 0;
}
