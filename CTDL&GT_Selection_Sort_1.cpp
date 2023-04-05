#include <iostream>
using namespace std;


void DOI(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min  = step;
    for (int i = step + 1; i < size; i++) {

      if (array[i] < array[min])
        min = i;
    }

    
    DOI(&array[min], &array[step]);
  }
}

int main() {
  int data[] = {9999, 30, 10, 19, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sau khi sap xep mang la:\n";
  printArray(data, size);
}
