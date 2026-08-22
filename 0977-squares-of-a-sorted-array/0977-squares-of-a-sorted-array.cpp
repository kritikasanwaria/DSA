class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1 ;

        vector<int>ans (nums.size());

        int position = nums.size()-1;

        while (left <= right){
            if (abs(nums[left]) > abs(nums[right])){
                ans[position] = nums[left] * nums[left];
                nums[left] * nums[left];
                left++; }
            else{
                ans[position] = nums[right] * nums[right];
                right--; }
            position--;
        }
        return ans;
    }
};