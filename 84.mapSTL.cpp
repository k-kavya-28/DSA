#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;

    m[1]="khushi";
    m[2]="kavya";
    m[13]="kk";
    // 1,2,13 are keys and values are khushi,kavya,kk

    m.insert({5,"ab"});

    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl; //will give 1,2,3 in sorted order always as maps are always sorted unlike unordered map
    }cout<<endl;

    cout<<"finding 13, 13 present or not using count -> "<<m.count(13)<<endl;
    cout<<"finding -13, -13 present or not using count -> "<<m.count(-13)<<endl;

    m.erase(13); //just have to give the key
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl; 
    }cout<<endl;

    auto it=m.find(5);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    } //13 hota toh vo bhi print ho jata

    
    return 0;
}