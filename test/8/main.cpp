#include <iostream>
#include <vector>


using namespace std;


int main(){

  //vector<int> test = {7,3,1,6,7,1,7,6,5,3,1,3,3};

  vector<int> test = {6,2,4,9,1,9,2,2,5,1,1,9,6};
  int val=1;
  for(int i = 0; i < test.size(); ++i){
    val *= test[i];

  }
  printf("The Val is %i\n",val);



  return 0;

}
