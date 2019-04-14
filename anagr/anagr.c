/*
 
 # esercitazioni_oii
 
 esercitazioni_oii
 
 - Progrmma "anagr.c": Programma che ricevevute in inpu due stringhe, "s1" e "s2", determina se "s1" sia un anagramma di "s2".
 Il file "input.txt" è composto da due righe: La prima riga contiene la stringa "s1" e la seconda contiene la stringa "s2". Entrambe le stringhe sono sequenze non vuote, costituite da lettere dell'alfabeto anglosassone codificate in codice ASCII, e la loro lunghezza massima è di 100 caratteri.
 Il file "output.txt" contiene una sola riga: la parola "SI" se "s1" è un anagramma di "s2", oppure la parola "NO" in caso contrario.

*/

#include <stdio.h>

int anagramma(char *s1,char *s2) {
    int cont[100]={0};
    int i;
    for(i=0;s1[i]!='\0';i++)
    {
        cont[s1[i]]++;
    }
    for(i=0;s1[i]!='\0';i++)
    {
        cont[s2[i]]--;
    }
    for(i=0 ; i<100;i++)
    {
        if(cont[i]!=0)
        {
            return 0;
        }
    }
    return 1;
}

#define MAXLEN 100

int main ()
{
    
    FILE *f;
    
    putchar('\n');
    
    char s1[MAXLEN+1],s2[MAXLEN+1];
    
    f = fopen("input.txt","r");
    
    if (!f) {
        fprintf(stderr,"IMPOSSIBILE APRIRE \"input.txt\"!!!");
        fprintf(stdout,"\nIL FILE \"input.txt\" NON ESISTE!");
    }
    else
    {
        printf("Lettura dell'input dal file \"input.txt\" in corso...\n");
        fscanf(f,"%s%s",s1,s2);
        fclose(f);
    }
    
    putchar('\n');
   
    f = fopen("output.txt","w");
   
    printf("Scrittura dell'output sul file \"output.txt\" in corso...\n");
    
    if (anagramma(s1,s2))
        fprintf(f,"SI");
    else
        fprintf(f,"NO");
    
    fclose(f);
    
    putchar('\n');
    
    return 0;
    
}
