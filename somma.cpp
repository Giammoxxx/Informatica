#include <iostream>
using namespace std;

/*

LANDUCCI GIANMARCO 3^CI

Esercizio: Facile 4

*/

int somma(int v[], int n) {
	
	int s = 0;
	
	for (int i = 0; i < n; i++) {
		
		s += v[i];
		
	}
	
	return s;
	
}

int main() {
	
	int v[] = {1, 2, 3, 4};
	
	cout << somma(v, 4);
	
	return 0;
	
}

