// Sereja and Dima
// https://codeforces.com/problemset/problem/381/A

/*
  Para resolver este problema, unicamente necesitamos simular
  el juego. Podemos usar dos apuntadores (indices) que nos indiquen
  la primera y ultima carta en juego en algun momento, y decidir
  quien tomara y cual de estas dos cartas tomara. Haremos esto hasta
  que ya no queden mas cartas en juego.
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  // l y r nos indican la primera y ultima carta en juego,
  // respectivamente
  int l = 0, r = n - 1;

  // turn es 1 o 0 y nos indica de quien es el turno actual
  // sa y sb es la suma total de cada jugador
  int turn = 0, sa = 0, sb = 0;

  // Simularemos el juego mientras queden cartas en juego
  // si l < r significa que no hay mas cartas
  while(l <= r){
    // Primero decidimos cual de las 2 cartas posibles se
    // tomara, y actualizaremos los apuntadores 
    int taken;
    if(a[l] > a[r]){
      taken = a[l];
      l++;
    }
    else{
      taken = a[r];
      r--;
    }

    // Le sumamos el valor de la carta a quien tenga el turno
    if(turn == 0){
      sa += taken;
    }
    else{
      sb += taken;
    }

    // Y cambiamos el turno
    turn = 1 - turn;
  }
  cout << sa << ' ' << sb << endl;
}
