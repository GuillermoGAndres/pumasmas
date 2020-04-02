#include <iostream>
#include <cmath>

using namespace std;

int main(){
  short numCases;
  cin >> numCases;
  while( numCases > 0){
    int areaTabla;
    cin >> areaTabla;
    cout << "Area a comprar: "<< areaTabla+areaTabla << endl;
    numCases--;
  }
    return 0;
}
