#include<iostream>
#include<cstring>
// #include "hero.cpp"

using namespace std;

class Hero{
    //properties
    private:
    char level;

    public:
    int health;
    char *name;     //char name[100]; is not a good practice as heap me zyada memory hoti hai
    static int timeToComplete; //is independent of any hero or enemy i.e. the time to complete a particular level
    //static member needs to be initialised outside the class



    //default constructor aise hota default h but can exclusively make and default wala fir automatically hat jaega
    // Hero(){
    //     cout<<"Constructor Called "<<endl;
    // }
    //ye default wala comment out krke agr Hero abc bnaya without parameters toh error ayega, as ek bhi bana diya constructor to default wala udd jata hai
    Hero(){
        cout<<"Default Constructor called"<<endl;
        name = new char[100];
    }   



    //parameterised constructor
    Hero(char level, int health){
        //cout<<"this-> "<<this<<endl;
        this->level = level;
        this->health = health;
    }



    //Copy constructor
    Hero(Hero& h){
        char *ch = new char[strlen(h.name)+1];
        strcpy(ch, h.name);
        cout<<"Copy constructor called"<<endl;
        this->name = ch;
        this->health = h.health;
        this->level = h.level;
    }


    
    //behaviour or function
    void print(){
        cout<<"["<<"Name: "<<this->name<<",";
        cout<<"Level: "<<this->level<<",";
        cout<<"Health: "<<this->health<<"]"<<endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int Hero::timeToComplete = 15;

int main()
{
    //7 
    cout<<"time to complete: "<<Hero::timeToComplete<<endl;
    Hero Ultron;
    cout<<"timeToComplete: "<<Ultron.timeToComplete<<endl;  //this object creation is not recommended as static member belongs to class
    Hero Hawkie;
    Hawkie.timeToComplete=20;
    cout<<"Hawkie time to complete: "<<Hawkie.timeToComplete<<endl;
    cout<<"Ultron time to complete: "<<Ultron.timeToComplete<<endl;
    //we see that time to complete for both gets updated so this is not recommended better use without object creation





    //6
    // Hero ironman;                   //static    destructor automatically called, that which gets printed
    // Hero *ironman2 = new Hero();    //dynamic   have to call destructor manually
    // delete ironman2;








    //5
    // Hero hulk;
    // //giving values
    // hulk.setHealth(88);
    // hulk.setLevel('C');
    // char name[7] = "HULKK";
    // hulk.setName(name);
    // //hulk.print();

    // //using default copy constructor
    // //comment the exclusively defined copy constructor
    // Hero betty(hulk);
    // //betty.print();

    // hulk.name[0] = 'B';
    // hulk.print();

    // betty.print();
    
    // hulk = betty;
    // hulk.print();
    // betty.print();








    //4
    // // Hero wanda;
    // // wanda.setHealth(99);
    // // wanda.setLevel('A');
    // Hero wanda('A', 95);
    // wanda.print();

    // //COPY CONSTRUCTOR
    // Hero ultron(wanda);
    // ultron.print();







    //3
    //showing the use of Hero() constructor, here we have created an object statically
    // cout<<"hi"<<endl;
    // Hero Thor(1000);
    // cout<<"Address of Thor "<<&Thor<<endl;
    // cout<<"bye"<<endl;
    
    //dynamically
    //Hero * h = new Hero;
    //Hero * h = new Hero();  //same as above






    //2
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

    

    //1
    // Hero h1;
    // h1.health = 100;
    // h1.level = 'D';
    //cout<<sizeof(h1)<<endl;
    // cout<<"Health: "<<h1.health<<endl;
    // h1.setLevel('F');
    // cout<<"Level: "<<h1.getLevel()<<endl;
    return 0;
}