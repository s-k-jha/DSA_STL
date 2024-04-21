#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool hasPairWithSum(const  vector<int>& nums, int k) {
     unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int candidate = k - nums[i];

        if (mp.find(candidate) != mp.end()) {
            return true;  
        }
        mp[nums[i]] = i;
    }

    return false;
}

int main() {
     vector<int> numbers = {10, 7, 3, 15};
    int k = 17;

    if (hasPairWithSum(numbers, k)) {
         cout << "True, there exist two numbers that add up to " << k <<  endl;
    } else {
         cout << "False, no such pair found." <<  endl;
    }

    return 0;
}
