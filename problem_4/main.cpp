#include <iostream>
#include <sstream>
#include <set>
#include <string>
#include <vector>
using namespace std;


//the rules of the game 
//are as follows:
//you are to create palindrome 
//numbers from n-digit numbers
  

bool palChecker(int number){
  string strVer = to_string(number);
  int numLen = strVer.size();
  int loopMax = numLen/2;

  int matchMaker = 0;  
  for(int i = 0; i < loopMax; i ++){
    int loopInd = i+1;
    int endInd = numLen - loopInd; 
    if(strVer.at(i) != strVer.at(endInd)){
      break;
    }
    else{
      matchMaker += 1;
    }
    if(matchMaker == loopMax){
       return true;
    }
    loopInd++;
  }


  return false;
}




int main(){

  //This is redundant looping
  for(int i = 999; i >= 900; i--){
    for (int j = 999; j >= 900; j--){
      if (j>i){
        continue;
      }
      else {
        int prod = i*j;
        bool isPal = palChecker(prod);
        if(isPal == true){
          printf("Found a Palindrome: %i which is a product of %i and %i\n",prod, i, j);
        }
       }
    }
  }




  return 0;
}

