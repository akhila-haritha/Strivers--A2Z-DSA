#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int max=arr[0],i;
    for(i=1;i<arr.size();i++){
        if(max<arr[i])max = arr[i];
    }
    return max;
    // Write your code here.
}
