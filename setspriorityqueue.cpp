#include<iostream>
#include<stack>
#include<queue>
#include<set>
#include<map>

using namespace std;

int main()
{
    stack<string> str;

    str.push("purnima");
    str.push("gupta");
    cout<<str.top()<<endl;
    cout<<str.size()<<endl;
    str.pop();
    cout<<str.top()<<endl;
    cout<<str.size()<<endl;
    cout<<str.empty()<<endl;

    queue<string> q;
    q.push("purnima");
    q.push("gupta");
    q.push("love");
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;

    priority_queue<int,vector<int>,greater<int>> maxi;

    maxi.push(9);
    maxi.push(10);
    maxi.push(89);
    maxi.push(78);
    maxi.push(7);
    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    set<int> s;
    s.insert(4);
    s.insert(7);
    s.insert(5);
    s.insert(7);
    s.insert(0);
    s.insert(5);
    s.insert(2);
    s.insert(4);
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;
    //s.erase(s.begin());

    set<int>::iterator it=s.begin();
    it++;
   // s.erase(s.begin());
     for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<s.count(5)<<endl;
    //cout<<s.find(5)<<endl;
    set<int>::iterator it2=s.find(2);
    cout<<*it2<<endl;

    map<int,string> m;
    m[1]="love";
    m[2]="babbar";
    m[3]="kumar";
    m.insert({4,"bheem"});
    for(auto i:m)
    {
        cout<<i.first<<"-> "<<i.second<<endl;

    }

    return 0;

}
