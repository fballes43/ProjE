#include <iostream>
#include <vector>
#include <cmath>



using namespace std;
//
//the rules of the game are easy
//we are to sum the first 100 natural 
//numbers sum and then sum their squares
// we then take their difference

  
int main(){

  int sum_of_sqrdVals = 0;
  int sum_of_natNs = 0;
  for(int i = 1; i <= 100; i++){
    int sqrdVal = pow(i,2);
    sum_of_sqrdVals+=sqrdVal;
    sum_of_natNs+=i;
  }

  int sqrdNats = pow(sum_of_natNs,2); 



  printf("The Sum of the Squared Values 1-100 is %i\n", sum_of_sqrdVals);
  printf("The Sum of the Values 1-100 is %i\n", sum_of_natNs);

  int diff = sqrdNats - sum_of_sqrdVals;
  printf("The difference between the first 100 natural numbers summed and squared and their squares summed is %i\n", diff);
  return 0;
}
