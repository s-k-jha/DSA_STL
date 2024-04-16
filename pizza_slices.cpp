#include <bits/stdc++.h>
using namespace std;
int main() {
	int N;
	cout<<"enter how many inputs you are going to enter"<<endl;
	cin>>N;
	{ 
	    vector<pair<int,int>>v;
	     int kitne_student,kitne_slice;
	    for(int i=0;i<N;i++){
	        cin>>kitne_student>>kitne_slice;
	        v.push_back({kitne_student,kitne_slice});
	    }
	  for(int j=0;j<N;j++){
	        cout<<v[j].first<<" "<<v[j].second<<endl;
	    }
	    int mul1=v[0].first*v[0].second;
	    cout<<mul1<<endl;
	    int numOfPizza;
	    if(mul1%4==0){
	     numOfPizza=mul1/4;
	    }
	    else
	    numOfPizza=((mul1/4)+1);
	    cout<<"no. of pizza required for student "<<numOfPizza<<endl;
	}
}