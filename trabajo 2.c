#include <stdio.h>
	
	int main() {
		int calificacion;
		
		printf("Ingrese la calificaci�n: ");
		scanf("%d", &calificacion);
		
		if (calificacion >= 90) {
			printf("Calificaci�n: A");
		} else if (calificacion >= 80) {
			printf("Calificaci�n: B");
		} else if (calificacion >= 70) {
			printf("Calificaci�n: C");
		} else if (calificacion >= 60) {
			printf("Calificaci�n: D");
		} else {
			printf("Calificaci�n: F");
		}
		
		return 0;
	}

