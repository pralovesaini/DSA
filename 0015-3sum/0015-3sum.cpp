class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size() - 1;
        set<vector<int>> st;
        for (int i = 0 ; i < nums.size();i++){
            int left = i+1;
            int right = n;
            while(left<right){
                int temp = nums[i] + nums[left] + nums[right];
                if(temp == 0){
                    st.insert({nums[i] , nums[left] , nums[right]});
                    left ++;
                }else if(temp > 0){
                    right -- ;

                }else
                    left++;
                            }
        }
       vector<vector<int>> ans(st.begin(), st.end());
        return ans;
        
    }
};