#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433832795

typedef struct _Point{
	double x;
	double y;
} Point;

typedef struct _Cycle{
	Point M;
	double r;
} Cycle;

typedef struct _Cylinder{
	Cycle C;
	double h;
} Cylinder;

double volume(Cylinder X){
	return PI*pow(X.C.r,2)*X.h;
}

int main(){
	Cylinder X;
	printf("Enter center point of Cylinder: \n");
	scanf("%lf,%lf",&X.C.M.x, &X.C.M.y);
	printf("Enter radius:");
	scanf("%lf", &X.C.r);
	printf("Enter height: ");
	scanf("%lf", &X.h);
	printf("The volume is: %lf", volume(X));
}


