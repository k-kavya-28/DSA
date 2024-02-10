#include<iostream>
// #include "hero.cpp"

using namespace std;

class Hero{
    public:
    int health;
    char level;
};

int main()
{
    Hero h1;
    //cout<<sizeof(h1)<<endl;
    cout<<"Health: "<<h1.health<<endl;
    cout<<"Level: "<<h1.level<<endl;
    return 0;
}