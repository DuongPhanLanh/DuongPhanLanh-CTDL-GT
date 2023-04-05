#include <iostream>
using namespace std;

void HOAN(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int partition(int array[], int low, int high) {
 
  int pivot = array[high];
 
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
     
      i++;
      
      HOAN(&array[i], &array[j]);
    }
  }
  
  HOAN(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    int pi = partition(array, low, high);

    quickSort(array, low, pi - 1);

    quickSort(array, pi + 1, high);
  }
}

int main() {
  int data[] = {8, 9, 0, 3, 2, 6, 1};
  int n = sizeof(data) / sizeof(data[0]);
  
  cout << "Mang chua sap xep: \n";
  printArray(data, n);
  
  // perform quicksort on data
  quickSort(data, 0, n - 1);
  
  cout << "Mang sau khi sap xep: \n";
  printArray(data, n);
}
