#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m){
    cout<<m.size()<<endl;
    
    //THIS IS LONG MEHTOD TO PRINT MAP WE CAN ALSO USE RANGE LOOP
    // ************************************************************
    // map<int,string> :: iterator it;
    // for(it=m.begin(); it!= m.end(); ++it){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
        //  }


     //RANGE LOOP
    //  ************************************************************
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<< endl;
    }

}
int main(){

    map<int,string>m;
    m[1]="abc";               //o(log (n))->time complexity
    m[5]="bcd";
    m[3]="cde";
    m.insert({4,"afg"});

    //m.find() ek key lega and usse find kar ke pair retun karega jisse me it.first and it.second se legne
    // auto it=m.find(4);

    // if(it==m.end()){
    //     cout<<"NO VALUE";
    // }
    // else{
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    ////////////////////////////////////////////////////////
    //m.erase() ye ek key ki value lega and use remove kar dega map se isme hum itrator bhi de sakte hai
    m.erase(3);
//output
// 1 abc
// 4 afg
// 5 bcd
auto it=m.find(5);

if(it!=m.end())       // ye bus segmentation fault bachane ke liye use kiya hai ki (ITERATOR) end me na ho 
    m.erase(it);
    print(m);
}