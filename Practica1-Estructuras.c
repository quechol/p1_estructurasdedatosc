#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char *nombre;
	int edad;
}personas;

personas *per;

void vaciar(char temp[]);
void copiar(char temp[], int i);


int main (){
	
	int i,j;
	int op;
	char aux;
	char temp[50];
	int cont=0;
	
	FILE *f;
	f = fopen("registros.txt","r+");
	if (f == NULL){
		printf("No se ha podido abrir el fichero \n");
		f = fopen("registros.txt","w+");
		printf("El archivo se a creado automaticamente");
		//exit(1);
	}
	while (!feof(f)){
		fgets(temp,50,f);
		cont++;
	}
	
	rewind (f);
	
	per = (personas*)malloc(cont*sizeof(personas));
	if (per == NULL){
		printf("No se ha podido reservar ma memoria. \n");
		exit(1);
	}
	
	for(i=0; !feof(f); i++){
		vaciar(temp);
		aux = '0';
		for (j=0; aux != '-'; j++){
			aux = fgetc(f);
			if (aux != '-'){
				temp[j]= aux;
			}	
		
		}
		copiar (temp,i);
		
		fgets (temp,4,f);
		per[i].edad = atoi(temp); //convertir a enteros
		
		printf("Nombre: %s Edad: %i. \n ",per[i].nombre, per[i].edad);
	}
	
	//menu
	printf ("\n------------------------\n");
	do{
		printf("Bienvenido");
		printf("\n 1.- Registrar Persona.");
		printf("\n 2.- Listar Personas Registradas");
		printf("\n 3.- Consultar Datos por ID.");
		printf("\n 4.- Cargar Personas desde Archivo.");
		printf("\n 0.- Salir.");
		printf("\n Opción: ");
		scanf("%d",&op);
		
		switch (op){
			case 1:
			break;
				
			case 2:	
			break;
				
			case 3:
			break;
			
			case 4:
			break;	
				
			case 0:
			break;	
				
			default:
			printf("Opcion Erronea");
			break;
		}
		
		
	}while (op!=0);
	
}

void vaciar(char temp[]){
	int i;
	for (i =0 ; i<50; i++){
		temp[i] = '\0';
	}
}

void copiar(char temp[], int i){
	int N = strlen(temp) + 1;
	per[i].nombre = (char*)malloc(N*sizeof(char));
	if (per[i].nombre == NULL){
		printf("ERROR \n");
		exit(1);
	}
	strcpy(per[i].nombre, temp);
}


