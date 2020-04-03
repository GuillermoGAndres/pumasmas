#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if(a < b){
		cout << -1 << endl;
	}else if(a > b){ //Tiene dos posibilidades que sea mayor or equal
		cout << 1 << endl;
	}else{ // implicaria -> iguales
		cout << 0 << endl;
	}
    return 0;
}



