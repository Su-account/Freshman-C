#include<stdio.h>
#include<math.h>

typedef struct add
{
	double x,y;
}point;

int main(void)
{
	point a,b;
	scanf("%lf%lf%lf%lf",&a.x ,&a.y ,&b.x ,&b.y );
	double dis=sqrt((a.x-b.x)*(a.x-b.x )+(a.y -b.y )*(a.y -b.y));
	printf("%.2lf\n",dis);
	return 0;
}
