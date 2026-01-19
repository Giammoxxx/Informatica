#include <iostream>
using namespace std;

/*

LANDUCCI GIANMARCO 3^CI

Esercizio: Facile 8

*/

void inverti(int v[], int t[], int n) {
	
	for (int i = 0; i < n; i++) {
		
		t[i] = v[n - 1 - i];
		
	}
	
}

int main() {
	
	int v[] = {1, 2, 3};
	int t[3];
	
	inverti(v, t, 3);
	
	for (int i = 0; i < 3; i++) {
		
		cout << t[i] << " ";
		
	}
	
	return 0;
	
}

