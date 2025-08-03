#include <stdio.h>

void mostrar_matriz(int matriz[][3], int filas, int columnas) {
	printf("Contenido de la matriz:\n");
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			printf("%4d", matriz[i][j]);
		}
		printf("\n");
	}
}

void busqueda_en_matriz(int matriz[][3], int filas, int columnas, int valor, int rangoMin, int rangoMax) {
	int encontrado = 0;
	int contador = 0;
	
	if (filas == 0 || columnas == 0) {
		printf("La matriz est� vac�a. No se puede realizar la b�squeda.\n");
		return;
	}
	
	if (valor < rangoMin || valor > rangoMax) {
		printf("El valor %d est� fuera del rango permitido [%d - %d].\n", valor, rangoMin, rangoMax);
		return;
	}
	
	printf("Buscando el valor %d en la matriz...\n", valor);
	
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			contador++;
			if (matriz[i][j] == valor) {
				printf("Valor encontrado en la posici�n [%d][%d]\n", i, j);
				encontrado = 1;
			}
		}
	}
	
	if (!encontrado) {
		printf("El valor %d no se encuentra en la matriz.\n", valor);
	}
	
	printf("Total de comparaciones realizadas: %d\n", contador);
}

int main() {
	int matriz[3][3] = {
		{1, -2, 3},
	{-4, 5, -6},
		{7, -8, 9}
	};
	
	int filas = 3, columnas = 3;
	int valor, rangoMin, rangoMax;
	
	// Mostrar matriz antes de buscar
	mostrar_matriz(matriz, filas, columnas);
	
	// Entrada de datos del usuario
	printf("Ingrese el n�mero que desea buscar: ");
	scanf("%d", &valor);
	
	printf("Ingrese el rango m�nimo permitido: ");
	scanf("%d", &rangoMin);
	
	printf("Ingrese el rango m�ximo permitido: ");
	scanf("%d", &rangoMax);
	
	// Llamada a la b�squeda
	busqueda_en_matriz(matriz, filas, columnas, valor, rangoMin, rangoMax);
	
	return 0;
}
