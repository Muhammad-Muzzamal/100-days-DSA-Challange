#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool findDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find(nums[i]) != map.end()) {
            int prevIdx = map[nums[i]];
            if(abs(prevIdx - i) <= k) {
                return true;
            }
        }
        map[nums[i]] = i;

    }

    return false;
}

int main()
{

    vector<int> nums = {1, 2, 3, 1};
    cout << findDuplicate(nums, 3) << endl;
    return 0;
}