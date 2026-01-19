#include <iostream>
using namespace std;

/*

LANDUCCI GIANMARCO 3^CI

Esercizio: Intermedio 2

*/

void passoavanti(int v[], int n) {
	
	for (int i = n - 1; i > 0; i--) {
		
		v[i] = v[i - 1];
		
	}
	
	v[0] = 0;
	
}

int main() {
	
	int v[] = {1, 2, 3};
	
	passoavanti(v, 3);
	
	for (int i = 0; i < 3; i++) {
		
		cout << v[i] << " ";
		
	}
	
	return 0;
	
}

