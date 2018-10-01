#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

int main(){

    int x[5];
    int y[5];
    bool repeat;

    srand(time(0));
    for (int i = 0; i<5; i++){
      x[i] = rand()%10;
      y[i] = rand()%10;
    }

    for (int i = 0; i<5; i++){
      cout << x[i] << " ";
    }
    cout << endl;
    for (int i = 0; i<5; i++){
      cout << y[i] << " ";
    }
    cout << endl;


    return 0;

}
