#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


float calcresult(float, float, char);
void mostrar_resultado ( float );



main(){
	float n1, n2, resultado;
	char op, respuesta[3]={"si"};
	system("Color 0c");
	system("Title CalculadoraSimple");
	while (!strcmp(respuesta,"si"))
	{
		printf("Ingrese un numero: \n");
		fflush(stdin);
		scanf("%f", &n1);
		printf("Ingrese el siguiente numero: \n");
		fflush(stdin);
		scanf("%f", &n2);
		printf("Tipo de operacion \n");
		printf("s:suma, r:resta, m:multiplicacion, d:division \n");
		fflush(stdin);
		scanf(" %c", &op);
		
		resultado = calcresult(n1, n2, op);
		mostrar_resultado(resultado);
		
		system("pause");
		system("cls");
		printf("\t\t\t\tDesea seguir haciendo operaciones?\n");
		fflush(stdin);
		gets(respuesta);
		system("cls");
	}
	printf("\t\t\t\tADIOS :D\n");
	return 0;
}
float calcresult (float n1, float n2, char op)
{
	float resu;
	switch(op)
	{
		case's':
			resu=n1+n2;
			break;
		case'r':
	    	resu=n1-n2;
		    break;	
		case 'm':
			resu=n1*n2;
			break;
		case'd':
			resu=n1/n2;
			break;
	}/*cierra el switch*/
	return resu;
}/*cierra funcion calculo*/

void mostrar_resultado(float resultado)
{
	printf("El resultado de la operacion es: %f\n", resultado);
}
