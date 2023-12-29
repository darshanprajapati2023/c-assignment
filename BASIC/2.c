#include<stdio.h>
int main(){
	char a;
	int b, c;
	
	printf("\nEnter operator (+,-,*,/,%):");
	scanf("%c",&a);
	
	printf("\n Enter operands:");
	scanf("%d %d", &b, &c);
	
	switch (a)
	{
		case '+':
			printf("\n%d + %d = %d\n", b,c,b+c);
			scanf("%f",&b,&c);
			break;
		case '-':
			printf("\n%d - %d = %d\n", b,c,b-c);
			break;
		case '*':
			printf("\n%d * %d = %d\n", b,c,b*c);
			break;
		case '/':
			printf("\n%d / %d = %d\n", b,c,b/c);
			break;
		case '%':
			printf("\n%d % %d = %d\n", b,c,b%c);
			break;
		
		default:
			printf("\nInvalid operator entered.\n");
			
	}
	
}
