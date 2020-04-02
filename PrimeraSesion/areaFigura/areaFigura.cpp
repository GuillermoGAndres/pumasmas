#include <iostream>
using namespace std;

int main(){
  int n;
  int edges;
  int area = 1;
  cin >> n;
  for(int i=0; i < n; i++){
    edges = i*4;
    area += edges;
  }
  cout << area << endl;
  
  return 0;
}
