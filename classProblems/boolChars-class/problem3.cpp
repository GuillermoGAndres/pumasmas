#include <iostream>
using namespace std;

int main(){
	char a, b;
	cin >> a >> b;
	int offset = abs(a-b);
	cout << offset << endl;
	return 0;
}





/*a b c d e f g h i 
1 2 3 4 5 6 7 8 9
a i = 9-1 = 8
REPRESENTACION ASCII
97 98 99 100 101 102 103 104 105
a  b  c  d  e   f    g   h   i
a i = 105 - 97 = 8 = | 97 - 105 1|= |-8|
105
-97
---
  8
z a = 97 - 130 = |-32| = 32*/


