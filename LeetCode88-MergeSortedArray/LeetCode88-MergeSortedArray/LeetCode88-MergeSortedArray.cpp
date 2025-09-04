// LeetCode88-MergeSortedArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing (increasing) order, and two integers m and n, 
  representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. 
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, 
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Constraints:

nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109

*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        //copy elements from nums2 to nums1 vector starting after the first 3 elements

        copy(nums2.begin(), nums2.end(), nums1.begin() + m);
        sort(nums1.begin(), nums1.end());

    }
};

int main()
{
    vector<int> A{1};
    vector<int> B{};

    unique_ptr<Solution> solution;
    solution->merge(A,1,B,0);

    for (auto& items : A) {
        cout << items << " ";
    }

    cin.get();
}
