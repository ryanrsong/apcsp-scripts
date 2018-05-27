#include <stdio.h>
void arrayAdd(int s, int n, int* arr)
{
   for (int i = 0; i < s; i++)
  {
       *(arr + i) = *(arr +i) +  n;
  }
}
int main()
{
  int arr[100];
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
//    printf("%d ", arr[i]);
  }
  arrayAdd(100, 3, arr);
  for (int i = 0; i < 100; i++)
  {
        printf("%d\n", arr[i]);
  }
}
