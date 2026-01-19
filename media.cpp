#include <iostream>
using namespace std;

/*

LANDUCCI GIANMARCO 3^CI

Esercizio: Facile 5

*/

double media(int v[], int n) {
	
	int s = 0;
	
	for (int i = 0; i < n; i++) {
		
		s += v[i];
		
	}
	
	return (double)s / n;
	
}

int main() {
	
	int v[] = {2, 4, 6, 8};
	
	cout << media(v, 4);
	
	return 0;
}

