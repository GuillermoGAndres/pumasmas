#include <iostream>

using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if( c >= a && c <= b){
    cout << "INTERVALO" << endl;
  }else if( c > b){
    cout << "DERECHA" << endl;
  }else{
    cout << "IZQUIERDA" << endl;
  }
  return 0;
}
