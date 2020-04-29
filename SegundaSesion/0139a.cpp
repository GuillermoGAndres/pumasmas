// Petr and Book
// https://codeforces.com/problemset/problem/139/A

/*
  Este problema lo resolvemos simplemente sumando las paginas leidas
  cada dia hasta que se complete el libro. Como las paginas leidas
  son iguales si el dia de la semana es el mismo, podemos recorrer
  usando la operacion modulo para regresar del domingo al lunes.
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a[7];
  cin >> n;
  for(int i = 0; i < 7; i++){
    cin >> a[i];
  }
  // Mantenemos el numero de paginas leidas hasta el momento y el
  // dia de la semana en el que nos encontramos
  // Iniciamos day como -1 ya que la primera instruccion del while
  // aumenta esta variable
  int cur = 0, day = -1;

  // Mientras no hemos acabado de leer el libro
  while(cur < n){
    // Pasamos al dia siguiente
    day = (day + 1) % 7;
    // Y sumamos las paginas leidas hoy
    cur += a[day];
  }
  cout << day + 1 << endl;
}
