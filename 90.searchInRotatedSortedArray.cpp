int getPivot(vector<int>& arr, int n){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binSearch(vector<int>& arr,int s, int e, int key){
    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid = start + (end-start)/2;
    }
    //loop se bahar aa gye means value is not present
    return -1;
}

int search(vector<int>& arr, int n, int key)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getPivot(arr, n);
    if(arr[pivot]<=key && key<=arr[n-1]){
        return binSearch(arr, pivot, n-1, key);
    }
    else{
        return binSearch(arr, 0, pivot-1, key);
    }
}
