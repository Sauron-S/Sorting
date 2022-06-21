/*Bubble Sort
Comparing n to n+1 and swap accordingly
Note: On 1 iteration atleast 1 element gets sorted
if No swaps on one iteration then array is already sorted bail out
*/

class Solution{
    void swap(int& i,int& j){
      int temp = i;
      i=j;
      j = temp;
    }
    
    void BubbleSort(std::vector<int> nums>{
      for(size_t i=0,end=nums.size();i<end-1;i++){
          int swap_count = 0;
          for(size_t j=0;j<(end-i-1);j++){
              if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                swap_count++;
              }
          }
          
          if(swap_count == 0){
            break;
          }
      }
    }
};

/*
  Complexity : O(n**2)
  With Above algo if Sorted Best Case already Sorted
  Complexity : O(n)
  Inplace and Stable Sort
*/
