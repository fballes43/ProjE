#include <iostream>
#include <set>
#include <vector>


using namespace std;

/*
 * We need to find what is the lowest
 * number that is evenly divisible 
 * by 1-20
 * I think only the following need to be checked 
 * 20,19,18,17,16,14,13,12,11 */


vector<long long int> checkFunction(vector<long long int> checkList){
  vector<long long int> candidateList;
  vector<long long int> divCheckList = {19, 18, 17, 16, 14, 13, 12, 11};
  
  printf("There are %i multiples of 20 to check\n", checkList.size()); 
  
  for(int i = 0; i < checkList.size(); i ++){
    int hitCount = 0;
    for(int j = 0; j < divCheckList.size(); j++){
      if (checkList[i] % divCheckList[j] == 0){
        hitCount++;
        if(hitCount == divCheckList.size()){
          cout<<" Found a hit in "<<checkList[i]<<endl;
        }
      }
    }
  }
  
  return candidateList;

}





int main(){


  vector<long long int> twenties;

  for(long long int i = 1; i < 20000000; i++){
    long long int mult = 20 * i;
    twenties.push_back(mult);
  }

  vector<long long int> trimmmedList = checkFunction(twenties);

  return 0;
}
