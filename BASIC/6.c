#include <stdio.h>
int main (){
	double b,h,area;
	
	printf("Enter the value of b and h");
	scanf("%lf %lf",&b,&h);
	
	area=0.5*b*h;
	
	printf("Area of Triangle is: %f", area);
}
