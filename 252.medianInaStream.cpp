#include<queue>

int signum(int a, int b){
	if(a>b)
		return 1;
	else if(a==b)
		return 0;
	else
		return -1;
}

void callMedian(int element, priority_queue<int> &maxh, priority_queue<int, vector<int>, greater<int> > &minh, int &m){
	switch(signum(maxh.size(), minh.size())){
		
		case 0: if(element > m){
			minh.push(element);
			m = minh.top();
		}
		else{
			maxh.push(element);
			m = maxh.top();
		}
		break;

		case 1: if(element > m){
			minh.push(element);
			m = (maxh.top() + minh.top())/2;
		}
		else{
			minh.push(maxh.top());
			maxh.pop();
			maxh.push(element);
			m = (maxh.top() + minh.top())/2;
		}
		break;

		case -1: if(element > m){
			maxh.push(minh.top());
			minh.pop();
			minh.push(element);
			m = (maxh.top() + minh.top())/2;
		}
		else{
			maxh.push(element);
			m = (maxh.top() + minh.top())/2;
		}
		break;

	}
}

vector<int> findMedian(vector<int> &arr, int n){
	vector<int> ans;
	priority_queue<int> maxh;
	priority_queue<int, vector<int>, greater<int> > minh;
	int median = -1;
	for(int i = 0; i<n; i++){
		callMedian(arr[i], maxh, minh, median);
		ans.push_back(median);
	}

	return ans;
}
