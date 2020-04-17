#include <iostream>
using namespace std;
//#define REP(i,a,b) for (int i=a; i < b; i++)
int main(){
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int cases;
    cin >> cases;
    //while(cases--){
    while(cases > 0){
	int n;
	bool have_even = false;
	bool have_odd = false;
	cin >> n;
	//cout << "antes ; " << n << endl;
	if( n % 2 != 0){
	    int item;
	    for(int i=0; i < n /*and have_odd == false*/; i++){
		cin >> item;
		if( item % 2 != 0){
		    have_odd = true;
		}
	    }
	    cout << (have_odd ? "YES" : "NO") << "\n";
	}else{
	    int item;
	    for(int i=0; i < n /*and (have_odd == false or  have_even == false)*/; i++){
		cin >> item;
		if(item %2 == 0){
		    have_even = true;
		}else{
		    have_odd = true;
		}
	    }
	    //cout <<( have_odd == true and  have_even == true )<< endl;
	    cout <<(( have_odd == true and  have_even == true) ? "YES" : "NO" ) << "\n";
	}  
	cases--;
    }

    return 0;
}
