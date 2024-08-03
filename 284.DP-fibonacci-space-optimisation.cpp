#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
        int n;
        cin>>n;
        
        int prev1 = 1;
        int prev2 = 0;
        int curr;

        // if(n==0)
            // return prev2;
        //ye wala case alag se handle krna pdega pr coz constrainsts me de rkha h ki n kabhi 0 ni hoga isliye chal gya

        for(int i=2; i<=n; i++){
                curr = prev1 + prev2;
                //shift logic
                prev2 = prev1;
                prev1 = curr;
        }

        cout << prev1 << endl;
}

