#include <vector>
#include <algorithm> 
#include <iostream> 
using namespace std;

// Partition function using the first element as the pivot.
int partition(std::vector<int>& arr, int low, int high) {
   int pivot=arr[high];
   int pos=low;
   for(int i=low;i<high;i++){
    if(arr[i]<pivot){
        swap(arr[pos],arr[i]);
        pos++;
    }
    }

    swap(arr[pos],arr[high]);
    return pos;
}

// QuickSort function that recursively sorts the array.
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pivotIndex = partition(arr, low, high);
        
        // Recursively sort elements before and after the pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Example usage:
int main() {
    std::vector<int> data = {7, 2, 1,6, 6, 8, 5, 3, 4};
    quickSort(data, 0, data.size() - 1);
    for(int i = 0; i < data.size(); i++) {
        cout << data[i] << " ";
    }
//     // The vector 'data' is now sorted.
//     return 0;
}
