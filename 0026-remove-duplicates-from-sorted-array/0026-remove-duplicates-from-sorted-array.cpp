class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1 = 0;
        for ( int i=0 ; i<nums.size() ; i++){
            if ( nums[i]!=nums[p1] ){
                p1++;
                swap(nums[i],nums[p1]);
            }
        }
        return p1+1;
    }
};