#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Element Element;
struct Element {
	int nombre;
	Element* suivant;
};

typedef struct Liste Liste;
struct Liste{
	Element* premier;
};

Liste *initilaistaion();
void insertion(Liste* liste, int nvNombre);
void suppression(Liste* liste);

int main(){
	printf("Hello World\n\n");
	int a = 89;
	int* b = &a;

	printf("a = %d, b = %d", a, (int) b);	
}

Liste *initialisation(){
    	Liste *liste = malloc(sizeof(*liste));
    	Element *element = malloc(sizeof(*element));

    	if (liste == NULL || element == NULL)
    	{
        	exit(EXIT_FAILURE);
    	}

    	element->nombre = 0;
    	element->suivant = NULL;
    	liste->premier = element;

    	return liste;
}

void insertion(Liste* liste, int nvNombre){
	Element* nvElement = malloc(sizeof(*nvElement));
	
	if (liste == NULL || nvElement == NULL){
		exit(EXIT_FAILURE);
	}	

	nvElement->nombre = nvNombre;
	
	// insertion au debut de la liste chaine
	nvElement->suivant = liste->premier;
	liste->premier = nvElement;
}

void suppresion(Liste* liste){
	if(liste == NULL){
		exit(EXIT_FAILURE);
	}

	if(liste != NULL){
		Element* objSupp = liste->premier;
		liste->premier = liste->premier->suivant;
		free(objSupp);
	}
}
