
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
   int low = 0;
   int high = n - 1; 
   int mid;

   while (low <= high) {
      mid = (low + high) / 2;

      if (arr[mid] == x)
         return mid;

      if (arr[mid] < x)
         low = mid + 1;

      else
         high = mid - 1;
   }
   return -1;
}
int main() {
   int arr[] = { 4, 6, 8,11,22,-3, 6 };
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 6;
   int tim = binarySearch(arr, n, x);

    if (tim == -1)
      printf("Khong tim thay %d trong mang", x);
     else
      printf("%d co trong mang, o vi tri thu %d", x, tim);
   

   return 0;
}
