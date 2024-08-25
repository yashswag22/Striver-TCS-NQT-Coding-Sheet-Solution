#include <bits/stdc++.h>

// iterative approach : 
int largestElement(vector<int> &arr, int n) {
   int max = INT_MIN;
   for(int i=0;i<arr.size();i++)
   {
       if(arr[i]>max)
       max=arr[i];
   }
  return max;
 
}

// ------------ let's try recursive approach ----------

int largestElement(vector<int> &arr, int n) {
    if(n == 1) return arr[0];
    // my GitHub : https://github.com/yashswag22/
    return max(arr[n-1],largestElement(arr,n-1));
}
