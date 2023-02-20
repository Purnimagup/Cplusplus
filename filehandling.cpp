#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str = "hello purnima";
     string str2;
    //opening a file
    //ifstream in("purnima hgjkhgjh");
    ifstream in("samplefile.txt");

    getline(in,str2);
    cout<<str2;
    return 0;
}
