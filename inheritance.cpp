#include<iostream>
using namespace std;

class a
{
public:
    void fun()
    {
        cout<<"inheritated"<<endl;
    }
};
class b : public a {
};

int main()
{

   int a=9;
   int* p=&a;
   cout<<&a<<"  "<<p<<"  "<<*p<<"  "<<a<<endl;
   int *ptr=new int(4);
   cout<<*ptr<<endl;
   int* arr=new int[3];
   arr[0]=2;
   arr[1]=8;
   arr[2]=8;
   cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
   return 0;
}
