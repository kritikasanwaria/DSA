class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        for(int i =0; i<nums.size() ; i++){
            int needed = target - nums[i];
               if (mp.find(needed) != mp.end()){
                 return {mp[needed],i};
               }
            mp[nums[i]] =i;                   /*    It is basically saying:  "Remember this number and where I found it."
                                                    So later, when you calculate needed, you can instantly ask the map:
                                                               "Have I seen this number before? If yes, where?"
                                                          That's why the map stores both the number AND its index. */
        }
    return {};   }
};