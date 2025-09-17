#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;




//Okay so the idea is to get the 
//following, multiples of 3 or 5 
//less than x which is the
//only command line arg

void print_banner(){
  
  cout<<"****************************"<<endl;
  cout<<"**    Hey, Handsome ;)    **"<<endl;
  cout<<"****************************"<<endl;

}


vector<int> multiplesVec(int max, int mult){
  cout<<endl;
  printf("Finding Multiples of %i up less than %i\n",mult, max);
  
  vector<int> multList;

  int curVal = 0;
  if(mult < max){

    multList.push_back(mult);
    curVal += mult;
    
  }

  while(curVal < max){
    int nextNum = curVal + mult;
    if (nextNum < max){
    multList.push_back(nextNum);
    curVal += mult;
    }
    else {
      break;
    }
  }

  /*
  for(auto i: multList)
    cout << i << " ";

  cout<<endl;
  */
  return multList;
} 

int sumFinder(set<int> multiSet){
  int finalAnswer = 0;

  for(set<int>::iterator it = multiSet.begin(); it != multiSet.end(); ++it){
    finalAnswer += *it;
  } 

  return finalAnswer;
}

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
  
  int answer = sumFinder(combinedSet);
  printf("\nThe answer you seek  for the mulitples of 3 and 5 less than %i is %i\n", upperBound,answer);

  return 0;
}
