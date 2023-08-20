#include <bits/stdc++.h> 
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	sort(arr.begin(), arr.end());
	vector<vector<int>> ans;
	for (int i=0; i<arr.size(); i++){
		for(int j=i+1; j<arr.size(); j++){
			for(int m=j+1; m<arr.size(); m++){
                if (arr[i] + arr[j] + arr[m] == K) {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[m]);
					ans.push_back(temp);
                }
			}
		}
    }
	return ans;
}

//coding ninjas
// this code has some compilation error - try after doing hash