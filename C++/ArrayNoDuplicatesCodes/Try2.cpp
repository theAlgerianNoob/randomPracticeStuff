#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;


int main(){
  int array[10];

  srand(time(0));
  for (int i=0;i<10;i++){
    array[i] = rand()%10;
  }

  int array1[5] = {array[0],array[1],array[2],array[3],array[4]};
  int array2[5] = {array[5],array[6],array[7],array[8],array[9]};

  for (int i=0; i<5; i++){
    cout << array1[i] << " ";
  }
  cout <<endl;

  for (int i=0; i<5; i++){
    cout << array2[i] << " ";
  }
  cout <<endl;




return 0;
}
