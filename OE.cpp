#include <bits/stdc++.h> 
using namespace std; 
void printEvenNumbers(int N) 
{ 
	cout << "Even: "; 
	for (int i = 1; i <= 2 * N; i++) { 
		if (!(i & 1)) 
			cout << i << " "; 
	} 
} 
void printOddNumbers(int N) 
{ 
	cout << "\nOdd: "; 
	for (int i = 1; i <= 2 * N; i++) { 
		if (i & 1 != 0) 
			cout << i << " "; 
	} 
} 
int main() 
{ 
	int N = 5; 
	printEvenNumbers(N); 
	printOddNumbers(N); 
	return 0; 
} 


// This code is contributed by vinay Pinjala. 


