/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 */

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> newArray(nums.size(), 0);

        for(int i = 0; i < nums.size(); i++){
            newArray[(i + k) % nums.size()] = nums[i];
        }
        nums = newArray;
    }
};


int main(){

    Solution test;

    vector<int> testcase1 = {1,2,3,4,5,6,7}; int rotationIncrement = 5;
    test.rotate(testcase1, rotationIncrement);

    for(auto element : testcase1){
        cout<<element<<", ";
    }
    
}