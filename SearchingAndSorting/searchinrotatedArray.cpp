class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index=-1;
        int ii=-1;
        int n=nums.size();
        if(target==nums[0]){
            return 0;
        }
        
        else if(target>nums[0]){
            for(int i=1;i<n;i++){
                if(target==nums[i]){
                    index=i;
                    break;
                }

            }
            return index;
        }
        
        else {
            for(int i=n-1;i>0;i--){
                if(target==nums[i]){
                    ii=i;
                    break;
                }

            }
            return ii;
        }
    }
};