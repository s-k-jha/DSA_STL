#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    unordered_map<string, int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;

    }
}


//INPUT FORMAT 
// 4
// sk
// sk
// js 
// ss
// 2
// sk
// ss