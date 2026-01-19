#include <iostream>
using namespace std;

/*

LANDUCCI GIANMARCO 3^CI

Esercizio: Intermedio 1

*/

bool is_a_set(int v[], int n) {
	
	for (int i = 0; i < n; i++) {
		
		for (int j = i + 1; j < n; j++) {
			
			if (v[i] == v[j]) {
				
				return false;
				
			}
			
		}
		
	}
	
	return true;
	
}

int main() {
	
	int v[] = {1, 2, 3, 4};
	
	cout << is_a_set(v, 4);
	
	return 0;
	
}

