#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  bool repeat = true;
  while(repeat){
    int x[10];
    srand(time(NULL));
    for (int i=0; i<10;i++){
      x[i]=rand()%10;
      cout << x[i];
    }
    cout<<endl;
    cout<< "Repeat? [y/n]" << endl;
    char answer;
    cin>>answer;

    repeat = answer == 'y';
  }
  cout << "Terminating Program..." <<endl;

}
