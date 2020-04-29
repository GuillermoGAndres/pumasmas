#include <iostream>

using namespace std;
/* Time: 62 ms; Memory: 300 KB */

int main(){
	int pages;
	int arr[7];
	cin >> pages;
	for(int i=0; i<7; i++)
		cin >> arr[i];
	int dia=-1;
	//cout << "Paginas totales " << pages << "\n"; 
	while(pages > 0){
		
		dia = ++dia % 7 ;
		pages -= arr[dia];	
		//cout << "Dia "<< dia+1 <<" leimos " << arr[dia] << " nos faltan " << pages << endl;
		
	}
	cout << dia+1 << "\n";

	return 0;
}
