#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

void shuffle(int *array, size_t n)
{
    if (n > 1)
    {
        size_t i;
        srand(time(NULL));
        for (i = 0; i < n - 1; i++)
        {
          size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = array[j];
          array[j] = array[i];
          array[i] = t;
        }
    }
}

int main(){

  int array[10];

  shuffle(array, 10);
  for (int i=0;i<10;i++){
    printf("%d ", array[i]);
  }
  cout <<endl;

  // int array1[5] =
  // int array2[5] =
  //
  // for (int i=0; i<5; i++){
  //   cout << array1[i] << " ";
  // }
  // cout <<endl;
  //
  // for (int i=0; i<5; i++){
  //   cout << array2[i] << " ";
  // }
  // cout <<endl;
  //
  //
  //

return 0;
}
