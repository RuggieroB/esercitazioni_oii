/*
 
 # esercitazioni_oii
 
 esercitazioni_oii
 
 - Algoritmo "thesum.c": Algoritmo che dopo aver chiesto all'utente di inserire un numero intero da tastiera, lo somma ad un altro intero letto da un file di testo "sum_dat.txt". Infine aggiorna il file "sum_dat.txt" con il nuovo valore.
 Il programma tiene conto del caso in cui il file "sum.dat" non esista.
 
 */

#include <stdio.h>

int main()
{
    
    FILE *f;
    
    int sum=0,val=0;
    
    f=fopen("sum_dat.txt","r");
    
    putchar('\n');
    
    if (!f)
    {
        fprintf(stderr,"IMPOSSIBILE APRIRE \"sum_dat.txt\"!!!");
        fprintf(stdout,"\nIL FILE \"sum_dat.txt\" NON ESISTE: Verra' creato in fase di salvataggio dei dati.");
        sum=0;
    }
    else
    {
        printf("Lettura del file \"sum_dat.txt\" in corso...\n");
        fscanf(f,"%d",&sum);
        fclose(f);
    }
    
    printf("\n\nValore corrente:\t%d",sum);
    printf("\n\nInserisci il valore da sommare:\t");
    scanf("%d",&val);
    sum+=val;
    printf("\n\nNuovo valore:\t%d",sum);
    printf("\nSalvataggio nel file \"sum_dat.txt\" in corso...\n");
    f=fopen("sum_dat.txt","w");
    fprintf(f,"%d\n",sum);
    fclose(f);
    
    putchar('\n');
    
    return 0;
    
}
