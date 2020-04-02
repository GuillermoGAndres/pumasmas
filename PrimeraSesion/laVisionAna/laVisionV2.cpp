#include <iostream>
#include <vector>

using namespace std;

int main(){
  int numCases;
  int dineroAna;
  int dias;
  int cases = 1;
  cin >> numCases;
  while(numCases > 0){
     vector<double> array;
    cin >> dineroAna >> dias;
    for(int i=0; i < dias; i++){
      double item;
      cin >> item;
      array.push_back(item);
    }
    
    double min = array.at(0);
    int index = 0;
    for(int i=0; i < array.size(); i++){
      if(array.at(i) < min ){
	min = array.at(i);
	index = i;
      }
    }
    cout <<"Case "<<cases<<": comprar en dia "<<index+1<<endl;
    cases++;
    numCases--;
  }
  return 0;
}
