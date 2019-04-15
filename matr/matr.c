/*

# esercitazioni_oii

esercitazioni_oii

- Programma "matr.c": Programma che ricevuta una matrice di interi "matr[n][m]" in input, la stampa in output, dapprima in ordine crescente, successivamente in ordine decrescente; 
   infine stampa la somma della diagonale minore e della diagonale maggiore e la somma di tutti i valori costituenti la matrice.
	Il file "input.txt" è composto da due righe: La prima contiene il numero di righe "n" ed il numero di colonne "m". La seconda riga contiene i singoli valori delle celle 
	che costituiscono la matrice.
	Il file "output.txt" è composto da quattro righe: La prima contiene la matrice; la seconda contiene la somma della diagonale maggiore; la terza contiene la somma della diagonale maggiore;
	la quarta contiene la somma di tutti i valori costituenti la matrice.

*/

#include <stdio.h>

#define l 100

int main ()
{

	int matr[l][l];
 
	int n,m,i,j,s_tot=0,s_d_max=0,s_d_min=0;

	putchar('\n');

	freopen("input.txt","r",stdin);

	scanf("%d%d",&n,&m);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{	
			scanf("%d",&matr[i][j]);
			s_tot+=matr[i][j];
		}
	}

	freopen("output.txt","w",stdout);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{	
			printf("%d ",matr[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{	
			if(i==j)
			{
				s_d_max+=matr[i][j];
			}
			/* No 'else' for this 'if' */
			s_d_min+=matr[n-i][j];
		}
	}

	printf("\n%d\n",s_d_max);

	printf("%d\n",s_d_min);

	printf("%d",s_tot);

	putchar('\n');

	return 0;
}