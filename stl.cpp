#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std ;


int main()
{
  /*  vector<int> v(5,1);
    for(int i:v)
    {
        cout<<v[i];
    }cout<<endl;
    vector<int> V(v);
     for(int i:V)
    {
        cout<<V[i];
    }

*/


   /* array<int,5> a={1,2,3,4,5};
    for(int i:a)
    {
        cout<<a[i-1]<<" ";

    }cout<<endl;

    cout<<a.at(2)<<endl;
    cout<<a.size()<<endl;
    cout<<a.empty()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
*/
  vector<int> v;
   int m;
  cout<<"enter the element"<<endl;
  for(int i:v)
  {
      cin>> m;
    v.push_back(m);

  }cout<<endl;
  for(int i:v)
  {
      cout<<v[i]<<endl;
  }
  cout<<v.size()<<endl;
  cout<<v.capacity()<<endl;
  cout<<v.empty()<<endl;
  cout<<v.front()<<endl;
  cout<<v.back()<<endl;
  for(int i:v)
  {
      cout<<i<<endl;
  }
  for(int i:v)
  {
      v.pop_back();
  }
//  cout<<v.clear()<<endl;
  cout<<v.size()<<endl;
  cout<<v.capacity()<<endl;


    return 0;
}
