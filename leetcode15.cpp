// brute force approach
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        int n = nums.size();

        for(int i = 0 ; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                  if(nums[i]+nums[j]+nums[k]==0){
                      vector<int> temp(3);
                      temp[0] = nums[i];
                      temp[1] = nums[j];
                      temp[2] = nums[k];
                      sort(temp.begin(),temp.end());
                      st.insert(temp);
                      
                  }
                }
            }
        }
        for(auto it :st){
            ans.push_back(it);
        }
        return ans;
    }
};
