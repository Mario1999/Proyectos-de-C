// By: @Mario1999 on GitHub
#include<stdio.h>
#include<conio.h>

int main()
{
char reiniciar;
    
    do {
    	
	float a, b, c, final;
	printf("\n By: @Mario1999 on GitHub");
	printf("\n Ingrese los 3 lados de su angulo para saber si es isosceles, escaleno o equilatero");
	printf("\n Ingrese el primer lado: ");
	scanf("%f", &a);
	printf("\n Ingrese el segundo lado: ");
	scanf("%f", &b);
	printf("\n Ingrese el tercer lado: ");
	scanf("%f", &c);
	printf("\n Los lados ingresados fueron:   %f , %f, %f", a, b, c );

	if (a==b && b==c){
	printf("\n Su triangulo es EQUILATERO" );
	} 
	else if (a==b && c!=a or a==c && b!=a or b==c && a!=b )
	{
		printf("\n Su triangulo es: ISOCELES");
	}
	else if(a!=b && a!=c ){
		printf("\n Su triangulo es: ESCALENO");
	}
	
	
	printf("\n Desea realizar otro calculo? \n [1] Si \n [2] No  \nSeleccione su opcion: ");
        scanf("%f", &final);
        if (final == 1){
        	printf("\n Presione la tecla enter para continuar...");
		} else if (final == 2) {
            printf("\n Gracias por usar nuestra programa...");
			break; // Salir del bucle y terminar el programa
        }
	
	        getch();
	    } while (true);
	    
	    return 0;
	}
	
