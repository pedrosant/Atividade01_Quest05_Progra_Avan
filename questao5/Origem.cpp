#include<iostream>

using namespace std;

int main() {
	int n1 = 1; int n2 = 4; int n3 = 4; int n;
	int controlador = 1;
	cout << "Digite um numero: ";
	cin >> n;
	
		for (int i = 0; i < n; i++) {
			if (controlador == 1) {
				cout << n1 << ",";
				n1++;
			}
			if (controlador == 2) {
				cout << n2 << ",";
				n2++;
			}
			if (controlador == 3) {
				cout << n3 << ",";
				n3++;
				controlador = 0;
			}
			controlador++;
		}
		
	return 0;
}