#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //creation
    //unordered_map<string, int> m;
    map<string, int> m;

    //insertion
    //1 method
    pair<string, int> p = make_pair("khushi", 2);
    m.insert(p);

    //2 method
    pair<string, int> pair2("kavya", 3);
    m.insert(pair2);

    //3 method
    m["mera"] = 1;
    
    //what will happen if 
    m["mera"] = 2;
    // <"mera",1->2> update ho jaega only first time creation, i.e. no duplicate entries



    //search
    cout<< m["mera"] <<endl;
    cout<< m.at("kavya") <<endl;


    //VVImp
    // cout<< m.at("unknownKey") <<endl;
    //error ayega
    cout<< m["unknownKey"] <<endl;  //iske according 0 ki entry ban jaegi and if upar wali line iske neeche likhun toh dono 0 denge
    cout<< m.at("unknownKey") <<endl;

    //size
    cout<< m.size() <<endl;

    //to check presence
    cout<< m.count("bro") <<endl;
    cout<< m.count("khushi") <<endl;

    //erase
    m.erase("love");
    cout<< m.size() <<endl;


    //how to access complete map
    //method 1
    // for(auto i: m){
    //     cout <<  i.first << " " << i.second <<endl;
    // }
    //method 2 - iterator
    // unordered_map<string, int> :: iterator it = m.begin();
    map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second <<endl;
        it++;
    }



    return 0;
}