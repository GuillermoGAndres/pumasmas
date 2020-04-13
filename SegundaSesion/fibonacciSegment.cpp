#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;

void serieFibonacci(int enesimo){
    //    int a[enesimo];
    vector<int> a(enesimo);
    a[0]=1; //por definicion
    a[1]=1;
    //if(enesimo >= 3){
    for(auto i = 2; i < enesimo; i++){
	a[i] = a[i-1] + a[i-2];
    }
    for(int item : a){
	cout << item << ", " ;
    }
    //}else
    //	cout << "No esta definida" << endl;
}


int sucesion(int a, int b){
    return 
}

int[] hacerSegmento(int l, int r, int array[]){
       int newSegment[r+1];
       for(l=0; l < r; l++){
	   newSement[i] = array[i];
       }
       return newSegment;
   }
	   

int main(){
    int MAX = 10
    int array[] = { 1 2 3 5 8 13 21 34 55 89 };
    return 0;
}



	
    
