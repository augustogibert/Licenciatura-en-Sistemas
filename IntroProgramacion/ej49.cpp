/* ej 49 club de barrio, deportes y chicos */
#include <stdio.h>
#define TAM 5

int main(){
	char dep[TAM]; 
	int ins[TAM];
	int total = 0, menor;
	
	//ingreso los datos: deportes y sus inscriptos, validar inscriptos > 0
	for (int i=0; i<TAM; i++){
		puts("Ingrese el deporte: ");
		scanf("%c", &dep[i]);
		fflush(stdin);
		puts("Cuantos chicos hay inscriptos?: ");
		//validar que la cantidad sea mayor a 0
		do{
			scanf("%d", &ins[i]);
			fflush(stdin);
			if (ins[i]<0) printf("Error, vuelva a cargar un nro mayor a cero.\n");
		} while (ins[i]<0);
		total += ins[i]; // total = total + ins[i]
		if (i ==0) menor = i; //valor de referencia va a ser la posici�n 
		else if (ins[i] < ins[menor]) menor = i;
	}
	
	//mostrar en pantalla lo cargado en columnas
	for (int i=0; i<TAM; i++) printf("%c\t%d\n", dep[i], ins[i]);


	for (int i=0; i<TAM; i++) printf("%c\t%d\n", dep[i], ins[i]);
	
	
	
	//conclusiones con los datos que cargu�
	//calcular y mostrar cuantos chicos hay en total
	printf("Hay %d chicos inscriptos en deportes\n", total);
	
	
	//buscar cual es el deporte con menos jugadores
	printf("El deporte con menos inscriptos es %c con %d\n", dep[menor], ins[menor]);
	
	
	//calcular la cantidad de profesores necesarios por deporte
	
	
		
}

/*
F      100
B		45
J		32
N		121
H		38*/
