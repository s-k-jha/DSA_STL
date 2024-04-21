#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        //n->bags and k->minutes
        int n,k;
        cin>>n>>k;
        multiset<long long>bags;

        for(int i=0;i<n;++i){
            int candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
         long long total_candies=0;
         for(int i=0;i<k;i++){
            //set ke last bag ke candy ko khaya then decrement kiya 
            // auto last_it= --bags.end();
            auto last_it= bags.end();
                   --last_it;

            long long candy_ct = *last_it;
            total_candies+=candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct/2);

         }
         cout<<total_candies<<endl;

    }
}