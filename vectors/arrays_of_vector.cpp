#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>&v){
    // cout<<"size:"<<" "<<v.size()<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
      cout<<endl;
}
int main()
{
   int N;
   cin>>N;
   vector<int>v[N];
   for(int i=0;i<N;i++){            //total kitne vector doge
    int n;                           //size of andar wale vector
    cin>>n;
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        v[i].push_back(x);

    }
   }
    for (int i = 0; i < N; ++i)
    {
        printVec(v[i]);
    }
    
   }

   //yaha number of rows fix hai jo ki N hai 
   //but ek fayda hai ki no. of column dynamic hai 
   //ab hum isko improve karne ke liye bnaenge vector of vector