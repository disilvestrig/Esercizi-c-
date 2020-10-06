#include <iostream>

using namespace std;

int main()
{
    char studenti[100][100];
    char prof[100][100];
    int nstudenti;
    int nprof;
    int voto;
    printf("Inserisci numero di studenti: ");
    scanf("%d",&nstudenti);
    printf("\nInserisci numero di prof: ");
    scanf("%d",&nprof);
    int mediast[nstudenti];
    int mediapr[nprof];
    for(int i = 0;i<nstudenti;i++){
        mediast[i] = 0;
    }
    for(int i = 0;i<nstudenti;i++){
        mediapr[i] = 0;
    }
    for (int i = 0;i<nstudenti;i++){
        printf("\nInserisci nome studente: ");
        scanf("%s",&studenti[i]);
    }
    for (int i = 0;i<nprof;i++){
        printf("\nInserisci nome prof: ");
        scanf("%s",&prof[i]);
    }
    for(int j=0;j<nstudenti;j++){
    for (int i = 0;i<nprof;i++){
        printf("\nInserisci voto dato da %s a %s : ",prof[i],studenti[j]);
        scanf("%d",&voto);
        while (voto >5 || voto < 0){
            printf("\nVoto non valido , l'intervallo è tra 0 e 5 , riinseriscilo : ");
            scanf("%d",&voto);
        }
        mediast[j]+= voto;
        mediapr[i]+= voto;
    }
    }
    int max = mediast[0];
    int ind = 0;
    for (int i = 0;i<nstudenti;i++){
        if (max < mediast[i]){
            max = mediast[i];
            ind = i;
        }
    }
    float x = mediast[ind];
    float y = nprof;
    float media = x/y;
    printf("\nL'alunno più bravo è %s con una media di %.2f",studenti[ind],media);
    int min = mediapr[0];
    ind = 0;
    for (int i = 0;i<nprof;i++){
        if (min > mediapr[i]){
            min = mediapr[i];
            ind = i;
        }
    }
    x = mediapr[ind];
    y = nstudenti;
    
    media = x/y;
    printf("\nIl prof più severo è %s con una media di %.2f",prof[ind],media);
    
}
