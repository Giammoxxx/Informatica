#include <iostream>
using namespace std;

/*

LANDUCCI GIANMARCO 3^CI

Esercizio: Facile 6

*/

int cerca(int v[], int n, int x) {
	
	for (int i = 0; i < n; i++) {
		
		if (v[i] == x) {
			
			return i;
			
		}
		
	}
	
	return -1;
	
}

int main() {
	
	int v[] = {5, 3, 7, 1};
	
	cout << cerca(v, 4, 7);
	
	return 0;
	
}

