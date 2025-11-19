#include <stdio.h>

int main()
 {
  const double Pi= 3.14 ;
  double radius, SphereSurfacearea;

  printf("Enter radius of sphere\n");
  scanf("%lf", &radius);

   SphereSurfacearea= 4*Pi*radius*radius;

   printf("Sphere Surface area is: %lf \n",SphereSurfacearea);

  return 0;
 }
