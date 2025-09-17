#include <iostream>
#include <set>
#include <string>
#include <vector>
#include "funcs.h"
using namespace std;




//Okay so the idea is to get the 
//following, multiples of 3 or 5 
//less than x which is the
//only command line arg


int main(int argc, char* argv[]) {

  print_banner();
  int upperBound = stoi(argv[1],nullptr);
  cout<<endl;
  cout<<"Upper Bound: "<<upperBound<<endl;

  vector<int> threeX;
  threeX = multiplesVec(upperBound,3);

  vector<int> fiveX;
  fiveX = multiplesVec(upperBound,5);


  //I dont think we really need
  //this but it helps prevent double counting
  set<int> combinedSet;

  for(int i = 0; i < threeX.size(); i ++){
    combinedSet.insert(threeX[i]);
  }
  for(int i = 0; i < fiveX.size(); i++){
    combinedSet.insert(fiveX[i]);
  }
  
  /*
  cout<<"Final Set"<<endl;
  set<int>::iterator it;
  for (it=combinedSet.begin(); it!=combinedSet.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
  */
  int answer = sumFinder(combinedSet);
  printf("\nThe answer you seek  for the mulitples of 3 and 5 less than %i is %i\n", upperBound,answer);

    return 0;
}
