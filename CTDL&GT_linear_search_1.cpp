#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int arr[] = {5, 7, 1, -2, 8};
  int x = -2;
  int n = sizeof(arr) / sizeof(arr[0]);

  int kiem = search(arr, n, x);

  if (kiem == -1)
    printf("khong thay");
  else
    printf("Vi tri can tim thu %d", kiem);
    
    return 0;
   
}
