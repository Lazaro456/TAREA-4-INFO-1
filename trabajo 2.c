#include <stdio.h>
	
	int main() {
		int calificacion;
		
		printf("Ingrese la calificación: ");
		scanf("%d", &calificacion);
		
		if (calificacion >= 90) {
			printf("Calificación: A");
		} else if (calificacion >= 80) {
			printf("Calificación: B");
		} else if (calificacion >= 70) {
			printf("Calificación: C");
		} else if (calificacion >= 60) {
			printf("Calificación: D");
		} else {
			printf("Calificación: F");
		}
		
		return 0;
	}

