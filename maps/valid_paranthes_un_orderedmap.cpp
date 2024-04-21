#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {
    {'(', -1},
    {'{', -2},
    {'[', -3},
    {')', 1},
    {'}', 2},
    {']', 3}
};

string isbalance(string s) {
    stack<char> st;
    for (char bracket : s) {
        if (symbols[bracket] < 0) {
            st.push(bracket);
        } else {
            if (st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[bracket] != 0) {
                return "NO";
            }
        }
    }
    
    return st.empty() ? "YES" : "NO";
}

int main() {
   
    string input;
    cout << "Enter a string with brackets: ";
    cin >> input;
    

    string result = isbalance(input);
    cout << "Is the string balanced? " << result << endl;

    return 0;
}

