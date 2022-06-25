//Randomised Version of Quick Sort
class Solution{
  private:
  void swap(int &x, int&y){
    int temp = x;
    x = y;
    y = temp;
  }
  
  //Partition using Lomuto participation algorithm
  //Another way id Hoar's partition alogorithm
  int partition(int a[], int low, int high){
    int j = low -1;
    for(int i=low;i<high;i++){
      if(a[i]<a[high]){
        swap(a[++j],a[i]);
      }
    }
    
    swap(a[++j],a[high]);
    return j;
  }
  
  int partition_r(int a[], int low, int high){
    srand(time(NULL));
    int random = rand%(high-low+1) + low;
    swap(a[random], a[high]);
    return partition(a,low,high);
  }
  
  public:
  void RandomQuickSort(int arr[], int low, int high){
    if(low>=high){
      return;
    }
    
    int part = partition_r(arr, low, high);
    if(low< part-1){
      RandomQuickSort(arr, low, part-1);
    }
    
    if(high> part+1){
      RandomQuickSort(arr, part+1, high);
    }
  }
};
