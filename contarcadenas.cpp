#include <stdio.h>
#include <string.h>
int main(){
	char nombre[100];
	char *puntero=nombre;
	int longitud=0,vocales=0;
	//Se pide el ingreso del nombre del usuario
	printf("Hola! Ingresa tu nombre completo porfavor:\n");
	fgets(nombre, sizeof(nombre), stdin);//Lee la cadena completa eviando desbordamientos
	
	//Calcular longitud de la cadena
	ptr = nombre;
	while (*puntero != '\0') {
		if (*puntero == '\n') break; // Ignora el salto de línea
	
		if (*puntero != ' ') {
			longitud++;  // Solo cuenta letras no espacios
		}
		
		// Contar vocales (Mayusculas y minusculas)
		char c = *puntero;
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			vocales++;
		}
		
		puntero++;//El puntero incrementa
	}
	
	// Reemplazar vocales por asteriscos (*)
	puntero = nombre;
	while (*puntero != '\0') {
		char c = *puntero;
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			*puntero = '*';
		}
		puntero++;
	}
	
	// Mostrar los resultados obtenidos
	printf("\n La longitud de la cadena es: %d\n", longitud);
	printf("Tu nombre tiene una cantidad de vocales de: %d\n", vocales);
	printf("Cadena con vocales reemplazadas: %s\n", nombre);

	

	return 0;
}

