#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
       vector<int>v;            //use any datatype instead of int   //size is dynamically unlike array //similar to array in functioning
       
        int n;
        cin>>n;
      for(int i=0;i<n;i++){
           int x;
           cin>>x;

            v.push_back(x);
      }
      printVec(v);

}