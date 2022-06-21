/*
Selection Sort:
Iterate array
Find index of nth minimum first and swap it n-1 position element
*/

class Solution{
public:
  void swap(int &a,int &b){
    int temp = a;
    b = a;
    a =  temp;
  }
  
  void SelectionSort(std::vector<int> nums){
     for(int i=0,end= nums.size();i<end-1;i++){
       int min_index =i;
       for(int j=i+1;j<end;j++){
         if(nums[min_index]>nums[j]){
           min_index = j;
         }
       }
       
       swap(nums[min_index],nums[i]);
     }
  }
};
