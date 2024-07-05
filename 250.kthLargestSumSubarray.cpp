#include<algorithm> //1st code
#include<queue> //for 2nd code
int getKthLargest(vector<int> &arr, int k)
{
	// vector<int> sumStore;
	// int n = arr.size();
	// for(int i=0; i<n; i++){
	// 	int sum = 0;
	// 	for(int j=i; j<n; j++){
	// 		sum += arr[j];
	// 		sumStore.push_back(sum);
	// 	}
	// }
	// sort(sumStore.begin(), sumStore.end());
	// return sumStore[sumStore.size() - k];

    //TLE maar rha leetcode pe working on naukri

    


    //optimised 
	int n = arr.size();
	priority_queue<int, vector<int>, greater<int> > pq;
	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=i; j<n; j++){
			sum += arr[j];
			if(pq.size() < k){
				pq.push(sum);
			}
			else{
				if(sum > pq.top()){
					pq.pop();
					pq.push(sum);
				}
			}
		}
	}
	return pq.top();
}