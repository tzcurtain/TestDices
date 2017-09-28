#include <iostream>
#include <time.h>
using namespace std;

int main(){

  // cout << "Your Choice: odd(1) or even(2)";

  srand(time(0));

  int even = 0,odd = 0;
  HERE:
  for (int i=1;i<=100;i++){
    int now = rand() % 6;
    if (now % 2 == 0){
      even ++;
    }
    else {
      odd ++;
    }
  }

  if (even == odd){
    goto HERE;
  }

  if (even > odd){
    cout << "KEJING";
  }
  else {
    cout << "NOT YET";
  }

  return 0;
}
