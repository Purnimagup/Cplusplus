#include<iostream>
#include<string.h>
using namespace std;
//0 ==flse ,1=true;char tolower(char ch)
char tolower(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        return ch;
    }
    else{
            char temp= ch-'A'+'a';
    return temp;
}
}
bool pallindrome(char a[],int n)
{
    int s=0,flag;
    int e=n-1;
    while(s<=e)
    {
        if(tolower(a[s])!=tolower(a[e]))
        {
            return 0;

        }
        else
        {
            s++;
            e--;
        }

    }
    return 1;
}

class validpallindome
{
private:
    bool alphanumeric(char ch)
    {
        if((ch<='a'&&ch>='z')||(ch<='A'&&ch>='Z')||(ch<='0'&&ch>='9'))
        {
            return 1;
        }
        return 0;
    }
    char lower(char ch)
    {
        if((ch<='a'&&ch>='z')||(ch<='0'&&ch>='9'))
        {
            return ch;
        }
        else
        {
            int temp=ch-'A'+'a';
            return temp;
        }
    }
    bool check(string s,int n)
    {
        int h=0;
        int e=n-1;
        while(h<e)
        {
            if(s[h]!=s[e])
            {
                return 0;
            }
            else{
                h++;
                e--;
            }
            return 1;
        }
    }
public:
    bool pallindrome(string s)
    {
        //faltu character hatado
        string temp=" ";
        for(int i=0;i<s.length();i++)
        {
            if(alphanumeric[i])
            {
                temp.push_back[i];
            }
        }
        //lower case
        for(int i=0;i<temp.length();i++)
        {
            temp[i]=lower(temp[i])
        }

        return(check (temp,temp,length()));
    }
};

int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[],int n)
{
   int s=0;
   int e=n-1;
    while(s<e){
    swap(name[s++],name[e--]);
    }
}
char getmax(string s)
{
    int arr[26]={0};
    int number;
    for(int i=0;i<s.length();i++)
    {
        if(ch<='a'&&ch>='z')
        {
            number=ch-a;
        }
        else(ch<='A'&&ch>='Z')
        {
            number=ch-'A';
        }
        arr[number]++;
    }
    int max=-1,ans;
    for(int i=0;i<26;i++)
    {
        if(max<arr[i])
        {
            ans=i;
            max=arr[i];
        }
    }
    char final=ans+a;
}
int main()
{
    int flag;
    char name[10];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"your name is ";
    cout<<name<<endl;
    cout<<"your length is "<<getlength(name)<<endl;
    int len=getlength(name);

    reverse(name,len);
    cout<<"reverse name is "<<name<<endl;

        cout<<"pallindrome is here"<<pallindrome(name,len)<<endl;


        cout<<tolower('b')<<endl<<tolower('M');

    class a;
    a.








    return 0;
}
