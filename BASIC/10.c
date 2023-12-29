#include <stdio.h>
int main(){
	int area,l,w,h;
	printf("Enter the value of l,w and h");
	scanf("%d %d %d", &l,&w,&h);
	
	area=2*(l*w +h*l+h*w);
	printf("Area of Rectangle prism is: %d", area);
}
