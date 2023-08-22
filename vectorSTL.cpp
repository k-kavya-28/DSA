#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;
    cout<<"Size->"<<v.size()<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"Front->"<<v.front()<<endl;
    cout<<"Back->"<<v.back()<<endl;

    cout<<"before pop->"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop->"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size->"<<v.size()<<endl;
    cout<<"before clear capacity->"<<v.capacity()<<endl;
    v.clear();
    cout<<"after clear size->"<<v.size()<<endl;
    cout<<"after clear capacity->"<<v.capacity()<<endl;

    vector<int> b(5,1);
    //all initialised to 1
    cout<<"vector b->"<<endl;
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> c(b);
    //b vector copied into c vector
    cout<<"vector c->"<<endl;
    for(int i:c){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}