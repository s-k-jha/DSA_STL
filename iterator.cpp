#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //this loop is range based which is used to reduce the complexity and it's handy
    for(int value: v){
        cout<<value<<" ";

    }
    // vector<int>::iterator it = v.begin();
    // cout<< (*it)+1 <<endl;
    // for(it=v.begin();it<v.end();it++){
    //     cout<<(*it)<<endl;
    // }
    //////////////////////////////////////////////////////////////////////////////////
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>>::iterator it;
    for(it=v_p.begin(); it!= v_p.end(); ++it){
        cout<<(*it).first <<" "<<(*it).second<<endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////
    //we can also use arrow
    for(it=v_p.begin(); it!= v_p.end(); ++it){
        cout<<it->first <<" "<<it->second<<endl;
    }



//////////////////////////////////////////////////////////////////////
    vector<pair<int,int>>v_p_new={{1,2},{2,3}};
    for(auto value: v_p_new){
        cout<<value.first<<" "<<value.second;
    }

}