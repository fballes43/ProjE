#include <iostream>


using namespace std;

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



