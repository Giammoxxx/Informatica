#include <iostream>
using namespace std;

/*

LANDUCCI GIANMARCO 3^CI

Esercizio: Facile 7

*/

int conta(int v[], int n, int x) {
	
	int c = 0;
	
	for (int i = 0; i < n; i++) {
		
		if (v[i] == x) {
			
			c++;
			
		}
		
	}
	
	return c;
	
}

int main() {
	
	int v[] = {1, 2, 1, 1, 3};
	
	cout << conta(v, 5, 1);
	
	return 0;
	
}

