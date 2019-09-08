/* Insertion sort ascending order */

#include <stdio.h>

int main()
{
  int n, array[1000], c, d, temp;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }

  for (c = 1 ; c <= n - 1; c++) {
    d = c;

    while ( d > 0 && array[d-1] > array[d]) {
      temp          = array[d];
      array[d]   = array[d-1];
      array[d-1] = temp;

      d--;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }

  return 0;
}
