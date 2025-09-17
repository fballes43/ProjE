#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;


//The idea is to sum all 
//even Fibonaci numbers 
//whose values are less than
//4,000,000

int main(){
 

  int upperLim = 4000000;
  int lead = 1;
  int trailing = 2;
  int evenSum = 2;

  while(trailing < upperLim){
    int curSum = lead + trailing;
    if (curSum %2 == 0 && curSum < upperLim){
      evenSum += curSum;
    }
    lead = trailing;
    trailing = curSum;
  }

  printf("The final answer is %i\n", evenSum);



  return 0;
}
