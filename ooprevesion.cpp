#include<iostream>
using namespace std;

class Hero
{
    public:
    string name;
    static int timetocomplete;

    private:
    int health;
    char level;

    public:
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h,string n)
    {
        if(n=="riya")
        health=h;
    }
    void setlevel(int l)
    {
        level=l;
    }
    Hero()
    {
     cout<<"default constructor"<<endl;
    }

    Hero(string n,int h,char l)
    {
      this->name=n;
      this->health=h;
      this->level=l;
      cout<<"parameterized constructor"<<endl;

    }
    Hero(Hero &temp)
    {
        this->name=temp.name;
        this->health=temp.health;
        this->level=temp.level;
        cout<<"copy constructor"<<endl;
    }

    ~Hero()
    {
        cout<<"destructor"<<endl;
    }
 void print()
 {
     cout<<name<<endl;
     cout<<gethealth()<<endl;
     cout<<getlevel()<<endl;
     cout<<timetocomplete<<endl;
 }
};

class heroine:public Hero
{
    int color;
};

int Hero::timetocomplete=7565943;

int main()
{
    Hero ramesh;
    cout<<sizeof(ramesh)<<endl;
    Hero shubh("hj",90,'j');
    shubh.print();
    Hero* janu=new Hero("gguft",897,'5678');
    janu->print();
    Hero puri(shubh);
    puri.print();
    Hero* ram=new Hero;
    (*ram).name="ram";
    ram->sethealth(80,"riya");
    ram->setlevel('u');
    ram->print();

    ramesh.name="ugug";
    ramesh.sethealth(8,"riya");
    ramesh.setlevel('r');
    ramesh.print();
    Hero* a=new Hero;
    a=ram;
    a->print();
    delete ram;
    delete janu;

    heroine riya;
    heroine.name="ria";
    heroine.color=000;
    cout<<heroine.name<<endl;
    cout<<heroine.color<<endl;
    return 0;
}
