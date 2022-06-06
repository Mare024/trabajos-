/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

int main() {
	SIN_TIPO numero1;
	SIN_TIPO numero2;
	SIN_TIPO numero3;
	float total;
	printf("voy a sumar3 numeros,  dimelos\n");
	printf("dime el primer numero\n");
	scanf("%s",numero1);
	printf("dime el segundo numero\n");
	scanf("%s",numero2);
	printf("dime el tercer numero\n");
	scanf("%s",numero3);
	total = numero1+numero2+numero3;
	printf("El resultado es:%f\n",total);
	return 0;
}

