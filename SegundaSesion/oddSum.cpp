#include <iostream>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    while(cases > 0){
	int tam;
	cin >> tam;
	//int nums[tam];
	//Leerlos
	int sum=0;
	for(int i=0; i < tam; i++){
	    int number;
	    cin >> number;
	    //cin >> nums[i];
	    sum += number;
	}
	
	if(sum % 2 != 0)
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl;		  
	cases--;
    }
    return 0;
}

