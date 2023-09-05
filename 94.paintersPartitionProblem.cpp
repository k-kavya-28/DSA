bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0; i<n; i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(arr[i]>mid || studentCount>m){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n=boards.size();
    int s=0; //start
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=boards[i];
    }
    int e=sum;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(boards,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}