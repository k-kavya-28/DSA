#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  // Write your code here

  //remove odd length case
  if(str.length()%2 == 1){
    return -1;
  }

  //removing valid part
  stack<char> st;
  for(int i=0; i<str.length(); i++){
    char ch = str[i];
    if(ch=='{'){
      st.push(ch);
    }
    else{
      //ch==')'
      if(!st.empty() && st.top()=='{'){
        st.pop();
      }
      else{
        st.push(ch);
      }
    }
  }

  //now the stack contains only invalid part
  int a=0, b=0;
  while(!st.empty()){
    if(st.top()=='{'){
      a++;
    }
    else{
      b++;
    }
    st.pop();
  }
  int ans = ((a+1)/2 + (b+1)/2);
  return ans;

}