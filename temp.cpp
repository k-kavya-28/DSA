#include<iostream>
#include<vector>
using namespace std;

vector<long long> factorialOfNumbersTillN(int n){
    vector<long long> ans(n+1, 1);
    for(int i=2; i<=n; i++){
        ans[i] = ans[i-1] * i;
    }

    return ans;
}

int main()
{
 return 0;
}
