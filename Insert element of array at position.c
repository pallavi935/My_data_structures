//insert at position
#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 2;
    int value = 99;
  if (pos >= 0 && pos <= size) {
        for (int i = size; i > pos; i--) {
            arr[i] = arr[i - 1]; 
        }
        arr[pos] = value;
        size++;
    }
for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
