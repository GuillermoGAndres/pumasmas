#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >>a>>b>>c;
	if( (a && !b &&  c) or ( a && b && !c) ){
		cout <<"Aprobado"<<endl;
	}else{
		cout <<"Rechazado"<<endl;
	}
	return 0;
}

