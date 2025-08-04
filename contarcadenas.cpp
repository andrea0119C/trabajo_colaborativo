#include <stdio.h>
#include <string.h>

int contarLetra(char *cadena, char letraBuscada) {
    int contador = 0;
    while (*cadena != '\0') {
        if (*cadena == letraBuscada) {
            contador++;
        }
        cadena++;
    }
    return contador;
}

int main(){
	char nombre[100];          // Almacena el nombre completo del usuario
	char *ptr=nombre;          // Puntero para recorrer la cadena
	int longitud=0,vocales=0;
	//Nombre del usuario
	printf("Hola!!Ingresa tu nombre completo porfavor:");
	fgets(nombre, sizeof(nombre), stdin);//Lee la cadena completa eviando desbordamientos
	
	//Calcular longitud de la cadena
	ptr = nombre;
	while (*ptr != '\0') {
		if (*ptr == '\n') break; // Ignora el salto de línea
	
		if (*ptr != ' ') {
			longitud++;  // Solo cuenta letras no espacios
		}
		
		// Contar vocales (Mayusculas y minusculas)
		char c = *ptr;
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			vocales++;
		}
		
		ptr++;  // Avanza al siguiente carácter
	}
	
	// Reemplazar vocales por asteriscos (*)
	ptr = nombre;
	while (*ptr != '\0') {
		char c = *ptr;
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			*ptr = '*';
		}
		ptr++;
	}
	
	// Mostrar los resultados obtenidos
	printf("\n La longitud de la cadena es: %d\n", longitud);
	printf("Tu nombre tiene una cantidad de vocales de: %d\n", vocales);
	printf("Cadena con vocales reemplazadas: %s\n", nombre);	

char letra;
printf("\nIngresa una letra para saber cuántas veces aparece en tu nombre: ");
scanf(" %c", &letra);  

int veces = contarLetra(nombre, letra);
printf("La letra '%c' aparece %d veces (sin contar vocales ya reemplazadas).\n", letra, veces);

	return 0;
}

