#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 20
#define EL 119
#define Len 100

typedef struct{
    int numero_atomico;
	char simbolo[N];
    char nome[N];
}Elemento;

void printable(char str[]);
Elemento elementi[EL]; // globale

int main(){

    FILE * pt;
    pt=fopen("tavolach.txt","r");
    int i;
    char nom[N],simb[N];
    int num;
    char str[Len];

    if(pt!=NULL){
        while(!feof(pt))
            for(i=0;i<EL;i++){
                fscanf(pt,"%s %s %d",nom,simb,&num);
                strcpy(elementi[i].nome,nom);
                strcpy(elementi[i].simbolo,simb);
                elementi[i].numero_atomico=num;
            }
    }

    for(i=0;i<EL;i++){
            printf("Nome: %12s, \tSimbolo: %5s, \tNumero: %5d\n",elementi[i].nome,elementi[i].simbolo,elementi[i].numero_atomico);
    }

    do{
        printf("\n\nTesto: \n");
        gets(str);
        printable(str);
    }while(str[0]!='\0');
    fclose(pt);
    return 0;
}


void printable(char str[]){
    int i,found,finito=0;

    if(str[0]=='\0'){
    // printf("Fine\n");
        finito=1;
    }
    else if(str[0]==' '){
        printf("\n");
        printable(&str[1]);
    }
    else{
        if(!finito){
            // una lettera
            found=0;
            for(i=0;i<EL && found==0;i++){
                if( str[0]==elementi[i].simbolo[0] && elementi[i].simbolo[1]=='\0' ){
                    found=i;
                    printf("%s (%s)\n",elementi[found].simbolo,elementi[found].nome);
                    if(str[1]!='\0')
                        printable(&str[1]);
                }
            }
            // due lettere
            found=0;
            for(i=0;i<EL && found==0;i++){
                if( str[1]!='\0'){
                    if( str[0]==elementi[i].simbolo[0] && str[1]==elementi[i].simbolo[1] && elementi[i].simbolo[1]!='\0' ){
                        found=i;
                        printf("%s (%s)\n",elementi[found].simbolo,elementi[found].nome);
                        if(str[2]!='\0')
                            printable(&str[2]);
                    }
                }
            }
        }
    }

}