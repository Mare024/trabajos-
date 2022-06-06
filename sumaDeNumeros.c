/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int num1;
	int num2;
	int num3;
	int total;
	printf("Dame tu primer numero a sumar\n");
	scanf("%i",&num1);
	printf("Ahora dame el segundo numero\n");
	scanf("%i",&num2);
	printf("Ahora dame el el tercer numero \n");
	scanf("%i" , &num3);
	total = num1+num2+num3;
	printf("El resultado es: %i\n", total);
	return 0;
}

