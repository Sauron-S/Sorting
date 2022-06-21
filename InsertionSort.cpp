/*
Insertion Sort:
Insert one by one element to array 
and sort it
*/

class Solution{
  void InsertionSort(std::vector<int> num){
    for(int i=1,end= nums.size();i<end;i++){
      int key = nums[i];
      int j = i-1;
      while(j>=0 && nums[j]>key){
        arr[j+1] = arr[j];
        j--;
      }
      
      arr[j+1] = key;
    }
  }
}

/*
Complexity worst case: O(n**2)
    Worst case: Input in reverse sorted
    Best case: Array is Sorted
    Best Case Complexity: O(n)
*/
