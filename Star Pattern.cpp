
#include <bits/stdc++.h> 

void printPattern(int n) {

	for (int i = 1;  i <= n; i++) {

		//for printing spaces
		for (int j = i;  j < n; j++) {
			cout << ' ';
		}

		//for printing stars
		for (int k = (n - i); k < n; k++) {
			cout << '*';
		}

		if (i > 1) {

			for (int t = n; t > (n - (i - 1)); t--) {
				cout << '*';
			}

		}

		cout << endl;
	}

	return;
}
