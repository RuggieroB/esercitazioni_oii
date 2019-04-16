/*

# esercitazioni_oii

esercitazioni_oii

 - Programma "potcoda.c": Programma che mediante la ricorsione in coda, stampa in output sul fil "output.txt" la potenza di un numero elevato per un esponente, entrambi ricevuti in input dal 
   file "input.txt"
	Il file input.txt è costituito da 2 righe: la prima contiene la base e la seconda l'esponente della potenza.
	Il file "output.txt" è costituito da un'unica riga che contiene il risultato della potenza base^esponente.

*/

#include <stdio.h>

int power_helper( int base,int exponent,int parziale);
int power (int base,int exponent);

int main()
{

	int b,e;

	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

	scanf("%d%d",&b,&e);

	printf("%d",power(b,e));

}

/* power:
 *
 * suppone che exponent sia un intero maggiore
 * o uguale a 1
 */

int power (int base,int exponent)
{
 	
	return power_helper(base,exponent,1);

}

int power_helper (int base,int exponent,int parziale)
{

	if(exponent==1)	return base*parziale;

	return power_helper(base,exponent-1,base*parziale);

}