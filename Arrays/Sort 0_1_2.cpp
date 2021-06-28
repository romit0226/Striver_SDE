void sortColors(vector<int>& nums) {
       int lo=0;
        int high=nums.size()-1;
        for(int i=0;i<=high;i++){
            if(nums[i]==0){
                swap(nums[i],nums[lo++]);
            }else if(nums[i]==2){
                swap(nums[i--],nums[high--]);
            }
        }
    }
