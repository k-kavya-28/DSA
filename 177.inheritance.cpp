#include<iostream>

using namespace std;

class human{
    public:
        int height;
        int weight;
        int age;

    public:
        int getAge(){
            return this->age;
        }

        void setWeight(int w){
            this->weight = w;
        }
};

class male : public human {
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};

int main()
{
    male object1;
    cout<<object1.age<<endl;    //printing garbage value
    cout<<object1.height<<endl; //printing garbage value
    cout<<object1.weight<<endl; //printing garbage value
    cout<<object1.color<<endl;  //printing space 
    object1.sleep();
    object1.setWeight(47);
    cout<<object1.weight<<endl;
    
    return 0;
}