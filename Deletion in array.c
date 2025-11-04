//Delete element of the array at the end
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5; 
    if (n > 0) {
        n--; 
    }
    for (int i = 0; i <n; i++) {
        printf("%d ", arr[i]);
    }
}
//delete at beginning
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
   if (n> 0) {
        for (int i = 0; i < n- 1; i++) {
            arr[i] = arr[i + 1]; 
        }
        n--; 
    }
 for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
//insert at position
#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 2;
    int value = 99;
   if (pos >= 0 && pos <= size) {
        for (int i = size; i > pos; i--) {
            arr[i] = arr[i - 1];   // shift right
        }
        arr[pos] = value;
        size++;
    }
  for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
