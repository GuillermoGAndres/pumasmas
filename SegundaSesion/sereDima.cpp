#include<iostream>

using namespace std;
/* time:31 ms; memory:0 kb;*/
int main(){
		int cards;
		cin >> cards;
		int arr[cards];
		for(int i=0; i < cards; i++)
			cin >> arr[i];
		int serePoints=0;
		int derePoints=0;
		int i=0, j=cards-1;
		int turn=0; //0 turno de sere y 1 turno dere turn % 2;
		while(j >= i){
			turn = turn % 2;
			if(arr[i] > arr[j]){
				if(turn)
					derePoints += arr[i];
				else
					serePoints += arr[i];
				i++;
			}else{
				if(turn)
					derePoints += arr[j];
				else
					serePoints += arr[j];
				j--;
			}
			turn++;
			//cout << arr[i] << endl;
			//cout << arr[j] << endl;
			//i++,j--;
		}
		cout << serePoints << " ";
		cout << derePoints << '\n';
		return 0;
}

			


