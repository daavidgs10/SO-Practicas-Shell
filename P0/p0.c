#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 255
//Lista:

struct node {
    char com[MAXLEN];
    struct node *next;
};

struct node * lista;

void CreateList(struct node **plist){
    *plist = NULL;
}

void InsertElement(struct node **plist, char element[]) {
  struct node *last = *plist;
  while (last != NULL) {
    last = last->next;
  };
  last = (struct node *) malloc(sizeof(struct node));
  for (int i = 0; (element[i] != '\0') && (i < 255); i++)
    last->com[i] = element[i];
  last->next = NULL;
};

void RemoveElement(struct node **plist){
    
}

//Shell:

struct node *lista;

void printPrompt(){
    printf(" # ");
}

void readInput(){
    char comando[255];
    fgets(comando,255,stdin);
    InsertElement(&lista, comando);
}

int TrocearCadena(char * cadena, char * trozos[]){
    int i=1;
    if ((trozos[0]=strtok(cadena," \n\t"))==NULL)
        return 0;
    while ((trozos[i]=strtok(NULL," \n\t"))!=NULL)
        i++;
    return i;
}

void processInput(){
    
}

int main(int argc, char const *argv[])
{
    int salir = 0;
    while(!salir){
        printPrompt();
        readInput();
        processInput();
    }
    return 0;
}
