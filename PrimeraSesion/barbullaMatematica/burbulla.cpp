#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int acum = 0;
  int sum = 0;
  for(int i=0; i < n; i++){
    acum = acum + (i+1);
    sum = sum + acum;
  }
  cout << sum << endl;
    
  return 0;
}
