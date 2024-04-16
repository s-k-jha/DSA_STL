#include <unordered_map>
#include <map>
#include <iostream>
#include <fstream> // Added for file I/O
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
    cin.ignore(); // ignore karne ke liye left space buffer ko
    getline(cin, name);

    m[id] = name;
}

void saveToFile(const map<long long, string> &m, const string &filename)
{
    ofstream file(filename);

    if (file.is_open())
    {
        for (const auto &pair : m)
        {
            file << pair.first << " " << pair.second << endl;
        }
        file.close();
    }
    else
    {
        cerr << "Unable to open file for writing." << endl;
    }
}

void loadFromFile(map<long long, string> &m, const string &filename)
{
    ifstream file(filename);

    if (file.is_open())
    {
        long long id;
        string name;

        while (file >> id >> name)
        {
            m[id] = name;
        }

        file.close();
    }
    else
    {
        cerr << "Unable to open file for reading. Creating a new file." << endl;
    }
}

int main()
{
    map<long long, string> m;
    m[61] = "shivam";
    // Load data from file at the start
    loadFromFile(m, "data.txt");

    int k;
    cout << "Enter the ID of the students: ";
    cin >> k;

    for (const auto &it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

    findperson(k, m);

    addPerson(m);

    // Save data to file after adding a new person
    saveToFile(m, "data.txt");

    cout << "Updated list after adding a new person:" << endl;

    for (const auto &it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
