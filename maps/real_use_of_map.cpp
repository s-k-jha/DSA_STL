#include <unordered_map>
#include <map>
#include <iostream>
using namespace std;

void findperson(int k, map<long long, string> &m)
{
    auto index = m.find(static_cast<long long>(k));

    if (index != m.end())
    {
        cout << "The person with ID " << k << " is " << index->second << endl;
    }
    else
    {
        cout << "Person with ID " << k << " not found" << endl;
    }
}

void addPerson(map<long long, string> &m)
{
    long long id;
    string name;

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter name: ";
    cin.ignore(); // Ignore the newline character left in the buffer
    getline(cin, name);

    m[id] = name;
}

int main()
{
    int k;
    cout << "Enter the id of the students: ";
    cin >> k;

    map<long long, string> m;

    m[60LL] = "xyz";
    m[61LL] = "shivam"; // Use LL to denote long long literal
    m[16LL] = "aftab";
    m[84LL] = "nitin";
    m[70LL] = "harsh";

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    findperson(k, m);
    addPerson(m);
    cout << "Updated map after adding a new person:" << endl;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}
