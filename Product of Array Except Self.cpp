class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pp = 1, sp = 1, n = nums.size();
        // answer array
        vector<int> ans(n, 1);

        // multiply prefix product to left end 
        // multiply suffix product to right end
        // update prefix and suffix products
        for(int i = 0; i<n; ++i){
            ans[i] *= pp;
            ans[n-1-i] *= sp;

            pp *= nums[i];
            sp *= nums[n-1-i]; 
        }

        // return answer array 
        return ans;
    }
};
