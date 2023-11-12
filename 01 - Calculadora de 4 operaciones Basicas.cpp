// Upload to github By: @Mario1999
#include<stdio.h>
#include<conio.h>

int main()
{
    char reiniciar;
    
    do {
        float op, a, b, suma, resta, multiplicacion, division, final;
        printf("\n By: @Mario1999");
        printf("\n Bienvenido a nuestra calculadora, Que operacion desea realizar?");
        printf("\n 1) Suma");
        printf("\n 2) Resta");
        printf("\n 3) Multiplicacion");
        printf("\n 4) Division");
        printf("\n 5) Cerrar programa");
        printf("\n Su seleccion es: ");
        scanf("%f", &op);

        if (op == 5) {
            break; // Salir del bucle y terminar el programa
        }

        printf("\n Ingrese el primer numero: ");
        scanf("%f", &a);
        printf("\n Ingrese el segundo numero: ");
        scanf("%f", &b);
        printf("\n Los numeros ingresados fueron:   %f , %f", a, b);

        if (op == 1) {
            suma = a + b;
            printf("\n Usted selecciono suma, su resultado es: %f", suma);
        }
        else if (op == 2) {
            resta = a - b;
            printf("\n Usted selecciono resta, su resultado es: %f ", resta);
        }
        else if (op == 3) {
            multiplicacion = a * b;
            printf("\n Usted selecciono multiplicacion, su resultado es: %f ", multiplicacion);
        }
        else if (op == 4) {
            if (b != 0) {
                division = a / b;
                printf("\n Usted selecciono division su resultado es: %f", division);
            }
            else {
                printf("\n Error: No se puede dividir entre cero.");
            }
        }

        printf("\n Desea realizar otro calculo? \n [1] Si \n [2] No  \nSeleccione su opcion: ");
        scanf("%f", &final);
        if (final == 1){
        	printf("\n Presione la tecla enter para continuar...");
		} else if (final == 2) {
            printf("\n Gracias por usar nuestra calculadora...");
			break; // Salir del bucle y terminar el programa
        }

        getch();
    } while (true);
    
    return 0;
}
