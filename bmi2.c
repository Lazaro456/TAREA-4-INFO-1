#include <stdio.h>
int main() {
	float altura, peso, imc;
	
	printf("Ingrese el peso en KG:");
	scanf("%f", &peso);
		  
	printf("Ingrese la altura en metros:") ;
	scanf("%f", &altura);
	
	
	imc = peso/(altura * altura);
	
		
		printf("\nSu indice de masa corporal es: %.2f\n", imc);
		
		printf("%-10s| %-15s\n", "Indice", "Condición");
		printf("-----------------------------\n");
		printf("%-10s| %-15s\n", "<18.5", "Bajo peso");
		printf("%-10s| %-15s\n", "18.5 a 24.9", "Normal");
		printf("%-10s| %-15s\n", "25.0 a 29.9", "Sobrepeso");
		printf("%-10s| %-15s\n", ">=30", "Obesidad");
		
		
		
printf("Tu indice corporal es: " , imc);
		
		if (imc<18.5){
			
			printf("Bajo peso");
		}else
			if (18.5<imc && imc<=24.9){
				
				printf("Normal");
		}else
				if(25<imc && imc<=29.9){
				printf("Sobrepeso");
			}else
				   if(30<imc){
					printf("Obesidad");
				}
	
	return 0;
}

