#include <stdio.h>
#include <string.h>

struct registro{
	int id;
	char nombre[30];
	char direccion[30];
	char numero[10];
	char gen[1];
}arreglo[50];
	
void abrir (){
	
}
void agregar(){
	
}

void consultas(){
	
}

int main (){
	
	FILE *archivo;
	int op=0,i=0,j=0;
	
	/*
	struct registro registros[10];
	int i=0;
	while (i < 10){
		printf("Ingresa el registro %i : ",i+1);
		fgets(registros[i].nombre,30,stdin);
		registros[i].id = i+1;
		i++;
	}
	*/
	
	strcpy(arreglo[0].direccion, "14 SUR");
	strcpy(arreglo[0].gen, "M");
	arreglo[0].id = 101;
	strcpy(arreglo[0].nombre, "Saul");
	strcpy(arreglo[0].numero, "2221234567");
	
	do{
		printf("Bienvenido");
		printf("\n 1.- Cargar el archivo");
		printf("\n 2.- Agregar un elemento");
		printf("\n 3.- Cosultar los elementos");
		printf("\n selecciona una opcion");
		scanf("%d",&op);
		
		switch (op){
			case 1:
				
				printf("%s",arreglo[0].nombre);
				printf("\n");
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			default:
				printf("Opcion Erronea");
				break;
		}
		
		
	}while (op!=0);
	
	/*archivo = fopen("registros.txt","w");
	if (archivo){
		fwrite(registros,sizeof(struct registro),10,archivo);
		fclose(archivo);
	}*/
}















