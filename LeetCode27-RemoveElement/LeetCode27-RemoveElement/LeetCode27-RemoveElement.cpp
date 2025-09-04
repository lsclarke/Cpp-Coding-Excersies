// LeetCode27-RemoveElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int index = 0;
        for (auto i = nums.begin(); i != nums.end();) {

            if (nums.at(index) == val) {
                i = nums.erase(i);
            }
            else {
                index++;
                i++;
            }
        }

        return val;
    }
};

int main()
{
    vector<int> nums = { 3,2,2,3 };

    unique_ptr<Solution> ptr;
    ptr->removeElement(nums, 3);

    for (auto& items: nums) {
        cout << items << ", ";
    }
}
