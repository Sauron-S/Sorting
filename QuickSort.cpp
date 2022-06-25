/*
Normal Quick Sort
*/

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(high == low){
          return;
        }
      
        int part = quickSort(arr, low, high);
        if(low<(part-1)){
          quickSort(arr, low, part-1);
        }
      
        if(high> part+1){
          quickSort(arr, part+1, high);
        }
    }
    
    public:
    void swap(int &x, int &y){
        int temp = x;
        x = y;
        y = temp;
    }
    
    int partition (int arr[], int low, int high)
    {
      int j = low-1;
      for(int i = 0;i<high;i++){
        if(a[i]<a[high]){
          swap(a[i],a[++j]);
        }
      }
      
      swap(a[++j],a[high];
      return j;
    }
};

/*
  Inplace Sort, Stable Sort
  Complexity AverageCase: O(nlogn)
  Complexity WorstCase: O(n**2)
*/
