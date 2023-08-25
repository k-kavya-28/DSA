#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding 5 -> "<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"finding 6 -> "<<binary_search(v.begin(),v.end(),6)<<endl;

    //Lower bound is the smallest element in a sorted data set that is greater than or equal to a given value.
    //Upper bound is the largest element in a sorted data set that is less than or equal to a given value.
    cout<<"lower bound of 6 -> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound of 4 -> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=3;
    int b=5;
    cout<<"max->"<<max(a,b)<<endl;
    cout<<"min->"<<min(a,b)<<endl;
    swap(a,b); //swap is valid in all the containers
    cout<<"a->"<<a<<endl;
    cout<<"b->"<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"reversed string -> "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate -> "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    
    
    return 0;
}