#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    
    // Open the file
    ifstream inputFile("./file.txt");

    // Check if the file is open
    if (!inputFile.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    // Read the number of strings from the file
    int n;
    inputFile >> n;

    // Read strings from the file and insert them into the set
      string str;
    for (int i = 0; i < n; i++) {
        getline(inputFile, str);
        s.insert(str);
    }

    // Close the file
    inputFile.close();

    // Display unique strings
    cout << "Unique strings:" << endl;
    for (const string& sk : s) {
        cout << sk << endl;
    }

    return 0;
}
