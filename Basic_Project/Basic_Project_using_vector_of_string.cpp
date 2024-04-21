#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string>& v) // taking vector as reference
{
    cout << "size:" << v.size() << endl;
    
    bool shivamFound = false;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";

        if (v[i] == "shivam") {
            shivamFound = true;
        }
    }

    cout << endl;

    if (shivamFound) {
        cout << "You all are the good friend." << endl;
    }
    else{
        cout<<"Access denied! You have leave someone who is the best friend of yours"<<endl;
    }
}

int main() {
    vector<string> v;

    int n;
    cout << "How many number of friends do you have? Enter a number between 1 to 4." << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cout << "Enter the name of the friend: " << endl;
        cin >> s;
        v.push_back(s);
    }

    printVec(v);

    return 0;
}
