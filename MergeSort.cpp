//Merge Sort

class Solution {
public:
    //In place merging
    void Merge(vector<int>& nums, int start, int mid, int end){
        if(nums[mid]<=nums[mid+1]){
          return;
        }
      
        for(size_t i=end;i>=mid+1;i--){
            int j= mid-1;
            int k = nums[mid];
            while(j>=start && nums[j]>nums[i]){
                nums[j+1] = nums[j];
                j--;
            }
            
            if(j!=mid-1 || k>nums[i]){
                nums[++j] = nums[i];
                nums[i] = k;
            }
        }
        
    }
    
    //Outof place merging
    void Merge2(vector<int>& nums, int start, int mid, int end){
        std::vector num1(nums.begin()+start, nums.begin()+mid+1);
        std::vector num2(nums.begin()+mid+1, nums.begin()+end+1);
        
        int i =0 , j =0, k= start;
        while(i<num1.size() && j<num2.size()){
            if(num1[i]<num2[j]){
                nums[k++] = num1[i++];
            }else{
                nums[k++] = num2[j++];
            }
        }
        
        while(i<num1.size()){
            nums[k++] = num1[i++]; 
        }
        
        while(j<num2.size()){
            nums[k++] = num2[j++];
        }
    }
    
    void MergeSort(vector<int>& nums, int start, int end){
        if(start>= end){
            return;
        }
        
        int mid = start+(end-start)/2;
        MergeSort(nums, start, mid);
        MergeSort(nums,mid+1, end);
        Merge2(nums, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        MergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};

/*Out of place MergeSort
Time Complexity =O(nlogn) 
Space Complexity = O(n)

//InPlace Merge Sort 
Time Complexiy = O(n**2logn)
Space Complexity = O(1);
n**2 for merging using insertion sort
*/
