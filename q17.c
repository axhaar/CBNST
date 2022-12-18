#include <stdio.h>

float fx(float x,float y)
{
	return(x+y);
}
int main()
{
	printf("Achintya Mishra \t Section: A \t 20011857\n");
	float a,b,x,h;
	printf("Enter the inital values(x0 and y0):");
	scanf("%f%f",&a,&b);
	 
	printf("Enterthe value of x: ");
	scanf("%f",&x);
	
	printf("Enter the value of h: ");
	scanf("%f",&h);
	
	float t=0;
	float y=0,k1,k2,k3,k4;
	int it=0;
	while(t!=x)
	{
		 k1=h*fx(a,b);
		
		 k2=h*fx(a+(h/2),b+(k1/2));
		 
		 k3=h*fx(a+(h/2),b+(k2/2));
		
		 k4=h*fx(a+h,b+k3);
		 
		
		y=(k1+(2*k2)+(2*k3)+k4)/6;
		
		printf("For %d Increment The value of y at x0= %6.3f and y0= %6.3f is: %f\n",it+1,a,b,y);
		it++;
		a=a+h;
		b=b+y;
		t=t+h;
	}
	printf("The value of y at x= %6.3f and y0= %6.3fis: %f after %d increments\n",a,b,y,it);
	return 0;
}
