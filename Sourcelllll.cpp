#include <iostream>
using namespace std; 
//18
//int main() {
//int n;
	//cin >> n;
	//int i = 1;
	//int k = 0;

	//while (i <= n) {
	//	if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
		//	k++;
	//}
		//i++;

	//}
	//cout << k << endl;
//}

//1
//int main() {
	//int n = 7;
	//int s = 98;
	//while (n != s) {

	//	n += 7;
	//	cout << n << endl;
//	}
	
//}


//2

//int main() {
	//int i = 1;
	//int n;
	//cin >> n;
	//while (i != n) {
	//	cout << '$';
	//	i++;
  // }
//}
	

//3    

	//int main() {
	//	int i = 20;
	//	int sum = 0;
	//	while (i != 78) {
	//		if (i % 2 == 0) {
	//			sum += i;
	//		
	//		}
	//		i++;
	//	}
	//	cout << sum;
	//}


//4  
int main() {
	int sum = 1;
	int a,b;
	cin >> a>>b;
	int i = a;
	while (a != b) {
		if (a % 9 == 2 || a % 9 == 3) {
			sum = sum * a;

		}
		a++;
	}
	cout << sum;

}



