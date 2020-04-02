#include <iostream>
#include <vector>

using namespace std;

int main(){
  int numCases;
  int dineroAna;
  int numDias;
  cin >> numCases;
  int cases = 0;
  while(cases < numCases){
    vector<float> array;
    cin >> dineroAna >> numDias;
    for(int i=0; i < numDias; i++){
      float item;
      cin >> item;
      array.push_back(item);
    }
    float min = array.at(0);
    short index = 0;
    for(int i=0; i < array.size(); i++){
      if(array[i] < min){
	index = i;
      }
    }
    cout << "Case " << cases+1 << ": comprar en dia "<< index+1 <<endl;
    cases++;
  }
  return 0;
}
