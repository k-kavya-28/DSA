#include<iostream>
// #include "hero.cpp"

using namespace std;

class Hero{
    //properties
    private:
    char level;

    public:
    int health;


    //default constructor aise hota default h but can exclusively make and default wala fir automatically hat jaega
    Hero(){
        cout<<"Constructor Called "<<endl;
    }
    
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

    //showing the use of Hero() constructor, here we have created an object statically
    cout<<"hi"<<endl;
    Hero Thor;
    cout<<"bye"<<endl;
    
    //dynamically
    Hero * h = new Hero;
    Hero * h = new Hero();  //same as above







    /*
    //static allocation
    Hero a;
    a.setHealth(88);
    a.setLevel('B');
    cout<<"health is: "<<a.health<<endl;
    cout<<"level is: "<<a.getLevel()<<endl;

    //dynamically
    Hero * b = new Hero;
    b->setHealth(90);
    b->setLevel('A');
    cout<<"health is: "<<(*b).health<<endl;
    cout<<"level is: "<<(*b).getLevel()<<endl;
    cout<<"health is: "<<b->health<<endl;
    cout<<"level is: "<<b->getLevel()<<endl;
    */

    


    // Hero h1;
    // h1.health = 100;
    // h1.level = 'D';
    //cout<<sizeof(h1)<<endl;
    // cout<<"Health: "<<h1.health<<endl;
    // h1.setLevel('F');
    // cout<<"Level: "<<h1.getLevel()<<endl;
    return 0;
}