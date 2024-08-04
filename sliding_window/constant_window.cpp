#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,2,3,3,4,5,-1};
    int k=4, sum =0, max_sum =0;
    int n = sizeof(arr)/sizeof(arr[0]);
    if(k > n){
        return 1;
    }
    int l=0, r = k-1;
    for(int i=0; i< k ; i++){
        sum += arr[i];
    }
    while(r < n-1){
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
        max_sum = max(max_sum , sum);
    }
    
    cout<<max_sum;

}