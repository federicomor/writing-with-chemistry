#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 20
#define EL 118
#define Len 100

typedef struct{
    int numero_atomico;
    char simbolo[N];
    char nome[N];
}Elemento;

void printable(char str[], int count);
void show_end(int k);
Elemento elementi[EL]; // globale

int main(){

    FILE * pt;
    // pt=fopen("chem_table_ita.txt","r");
    pt=fopen("chem_table_eng.txt","r");
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
            printf("Name: %12s, \tSymbol: %5s, \tNumber: %5d\n",elementi[i].nome,elementi[i].simbolo,elementi[i].numero_atomico);
    }

    do{
        printf("\n\nText: \n");
        gets(str);
        printable(str,0);
    }while(str[0]!='\0');
    fclose(pt);
    return 0;
}


void printable(char str[], int count){
    int i,found,finito=0;
    if(str[0]==' '){
        printf(" |\n");
        printable(&str[1], count);
    }
    else{
        if(!finito){
            // una lettera
            found=0;
            for(i=0;i<EL && found==0;i++){
                if( str[0]==elementi[i].simbolo[0] && elementi[i].simbolo[1]=='\0' ){
                    found=i;
                    for(int k=0; k<count; k++)
                        printf(" | ");
                    printf("%s (%s)\n",elementi[found].simbolo,elementi[found].nome);
                    if(str[1]!='\0')
                        printable(&str[1], ++count);
                    else
                        show_end(count);
                }
            }
            // due lettere
            found=0;
            for(i=0;i<EL && found==0;i++){
                if( str[1]!='\0'){
                    if( str[0]==elementi[i].simbolo[0] && str[1]==elementi[i].simbolo[1] && elementi[i].simbolo[1]!='\0' ){
                        found=i;
                        for(int k=0; k<count; k++)
                            printf(" | ");
                        printf("%s (%s)\n",elementi[found].simbolo,elementi[found].nome);
                        if(str[2]!='\0')
                            printable(&str[2],++count);
                        else
                            show_end(count);
                    }
                }
            }
        }
    }

}

void show_end(int k){
    for(int i=0; i<k; i++)
        printf(" | ");
    printf("| -> END \n");
}