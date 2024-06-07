class Solution{
private:
    
    vector<int> nextSmallerElement(int* arr, int n){
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);

        for(int i=n-1; i>=0; i--){
            int curr = arr[i];
            while(s.top()!=-1 && curr<=arr[s.top()]){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);  //unlike prev qn of next smaller element we are pushing index here
        }
        return ans;
    }

    vector<int> prevSmallerElement(int* arr, int n){
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);

        for(int i=0; i<n; i++){
            int curr = arr[i];
            while(s.top()!=-1 && curr<=arr[s.top()]){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    int largestRectangleArea(int* heights, int n) {
        //int n = heights.size();

        vector<int> next(n);
        next = nextSmallerElement(heights, n);
        //TC->O(n)

        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
        //TC->O(n)

        int area = INT_MIN;
        //TC->O(n)
        for(int i=0; i<n; i++){
            int l = heights[i];
            
            //imp condition of [2,2,2,2], take care of this rest is easy
            if(next[i]==-1){
                next[i] = n;
            }
            int b = next[i] - prev[i] -1;

            int newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        //compute area for first row
        int area = largestRectangleArea(M[0], m);
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                //update row by adding previous row's value
                if(M[i][j]!=0){
                    M[i][j] = M[i][j] + M[i-1][j];
                }
                else{
                    M[i][j]=0;
                }
            }
            //entire row is updated now
            area = max(area, largestRectangleArea(M[i], m))
        }
        return area;
    }
};

//TC -> O(n*m)
//SC -> O(m) for largest rect area