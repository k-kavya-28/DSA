#include<iostream>
// #include "hero.cpp"

using namespace std;

class Hero{
    //properties
    private:
    char level;

    public:
    int health;
    
    //behaviour or function
    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char lvl){
        level = lvl;
    }
};

int main()
{
    // Hero h1;
    // h1.health = 100;
    // h1.level = 'D';
    //cout<<sizeof(h1)<<endl;
    // cout<<"Health: "<<h1.health<<endl;
    // h1.setLevel('F');
    // cout<<"Level: "<<h1.getLevel()<<endl;
    return 0;
}