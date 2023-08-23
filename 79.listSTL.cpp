#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;

    l.push_back(2);
    l.push_front(1);

    cout<<"list l->"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    list<int> m(l);
    cout<<"list m->"<<endl;
    for(int i:m){
        cout<<i<<" ";
    }cout<<endl;

    list<int> n(5,100);
    cout<<"list n->"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"after erase->"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"list size after erase ->"<<l.size()<<endl;

    return 0;
}