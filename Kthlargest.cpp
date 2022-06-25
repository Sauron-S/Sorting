/*
Find Kth largest using Quick- Select algorithm.
Its also used for partitioning in Quick sort
*/

class Solution{
public:
  int swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
  }
  
  int partition(std::vector<nums>, int start, int end){
    int i =start-1;
    for(int j=start;j<end;j++){
      if(nums[j]>nums[end]){
        i++;
        swap(nums[i],nums[j]);
      }
    }
    
    swap(nums[i+1],nums[end]);
    return i+1;
  }
  
  int FindKLarge(std::vector<int> nums,int start, int end, int k){
    int index = partition(nums,start,end,k);
    if((index+1)==k){
      return nums[index];
    }else if(k>index){
      return FindKLarge(nums,index+1,end,k);
    }else{
      return FindKLarge(nums,start,index-1,k);
    }
  }
};  

/*
Worst case Performance O(n**2) in case find largest number 
in a array which is sorted in decreasing order
Average case: O(nlogn)
*/
