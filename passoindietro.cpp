#include <iostream>
using namespace std;

/*

LANDUCCI GIANMARCO 3^CI

Esercizio: Intermedio 3

*/

void passoindietro(int v[], int n) {
	
	for (int i = 0; i < n - 1; i++) {
		
		v[i] = v[i + 1];
		
	}
	
	v[n - 1] = 0;
	
}

int main() {
	
	int v[] = {1, 2, 3};
	
	passoindietro(v, 3);
	
	for (int i = 0; i < 3; i++) {
		
		cout << v[i] << " ";
		
	}
	
	return 0;
	
}

