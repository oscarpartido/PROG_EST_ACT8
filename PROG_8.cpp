/* autor: Oscar Vivaldi Partido Ramirez realizado: 21/02/2022
programa que pida 3 numeros e imprima el mayor de ellos 
*/
#include <stdio.h>
int main (){
	int a,b,c;
	printf("introduce el valor de a: ");
	scanf("%d",&a);
	printf("introduce el valor de b: ");
	scanf("%d",&b);
	printf("introduce el valor de c: ");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("a es el mayor");
	}
	else if (b>a && b>c){
		printf("b es el mayor ");
		
	}
	else if (c>a&& c>b){
		printf("c es el mayor ");
		
	}
	else if (c==a && c==b){
		printf("las 3 son iguales");
		
	}
else if (a==b && a>c){
	printf("a y b son mayores");
	
}
else if (a==b && a>b){
	printf("a y c son mayores");
	
}
else if (a==c && a>b){
	printf("a y c son mayores");
	
}
else{
	printf("c y b son mayores");
}

}

