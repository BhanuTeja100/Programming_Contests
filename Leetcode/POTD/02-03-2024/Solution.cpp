class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // loop to find the squares of all the numbers
        for(int i=0; i<nums.size(); i++){
            nums[i] = nums[i] * nums[i];
        }

        //sorting the array of squares
        sort(nums.begin(), nums.end());
        // returning the sorted array
        return nums;    
    }
};

// Level : easy
// TC: O(nlogn)
// SC: O(1)