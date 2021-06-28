// First Approach- Sort using stl (NlogN)
// Second Approach- Using Counting Sort (count 0 1 2) O(N)
//Thrid Approach- Using Dutch Flag National algo

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
