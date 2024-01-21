#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>&v) //taking vector as reference
{
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    v.push_back(3);
    cout<<endl;
}
int main(){
       vector<int>v;           //size is also declare here
       v.push_back(1);
       v.push_back(2); 
    //    v.pop_back();
       vector<int>&v2=v;
       v2.push_back(4);
      printVec(v);
      printVec(v2);
      printVec(v);
      printVec(v);

}

