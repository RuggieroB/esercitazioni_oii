/*

# esercitazioni_oii

esercitazioni_oii

 - Programma "fib.c": Programma che stampa in output sul file "output.txt" i primi 10 elementi della Serie di Fibonacci mediante l'uso di una funzione ricorsiva.
	Il file "output.tzt" è costituito da 10 righe, una per ogni elemento stampato.

*/

#include <stdio.h>

int fibonacci(int n);

int main()
{

	int i;

	freopen("output.txt","w",stdout);

	for (i=0;i<10;i++)
	{
		printf("%d\n",fibonacci(i));
	}

	return 0;

}

/* fibonacci():
 *
 * fibonacci(0) -> 0
 * fibonacci(1) -> 1
 * fibonacci(n) -> fibonacci(n-1) + fibonacci(n-2)
 */
int fibonacci(int n)
{

 	if (n==0||n==1)	return n;

	return fibonacci(n-1) + fibonacci(n-2);

}