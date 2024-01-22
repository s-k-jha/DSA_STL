#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int>m;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]=m[s]+1;
        /**
         A loop runs n times, where each time it reads a string s from the user. It then increments the corresponding value in the map m for that string. If the string is encountered for the first time, its count is initialized to 
         **/
    }
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<< endl;
           }
}