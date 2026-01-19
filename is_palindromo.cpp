#include <iostream>
using namespace std;

/*

LANDUCCI GIANMARCO 3^CI

Esercizio: Intermedio 7

*/

bool is_palindromo(int v[], int n) {
	
	for (int i = 0; i < n / 2; i++) {
		
		if (v[i] != v[n - 1 - i]) {
			
			return false;
			
		}
		
	}
	
	return true;
	
}

int main() {
	
	int v[] = {1, 2, 3, 2, 1};
	
	cout << is_palindromo(v, 5);
	
	return 0;
	
}

