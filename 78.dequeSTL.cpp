#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> d;

    d.push_back(2);
    d.push_front(1);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    cout<<"element at index 1 using d.at->"<<d.at(1)<<endl;
    cout<<"First element using front->"<<d.front()<<endl;
    cout<<"Last element using back->"<<d.back()<<endl;
    cout<<"empty or not->"<<d.empty()<<endl;

    cout<<"size before erase->"<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"size after erase->"<<d.size()<<endl;
    //let's print to see konsa element delete hua hai
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}