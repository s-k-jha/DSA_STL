#include<bits/stdc++.h>
using namespace std;
int main()
{
 pair<int ,string>p;   //pair of two data types one is int and other is string and pair name is p
//  p=make_pair(3,"shivam");         //First Way of declaration 

  p={2,"shivam"};
   cout<<p.first<<" "<<p.second<<endl;     

   pair<int, string> p1 =p;           
   p1.first=40;

   cout<<p1.first<<" "<<p1.second<<endl;     

   pair<int, int> p_array[3];
   p_array[0]={10,20};
   p_array[1]={40,50};
   p_array[2]={70,80};
   for (int i = 0; i < 3; i++)
   {
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
   }
   cout<<endl;
   cout<<"1st row 2nd element is :-"<<" ";
   cout<<p_array[0].second;
   
}