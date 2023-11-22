#include <stdio.h>
#include <math.h>

#define f1(x,y,z) (15-y-z)/10
#define f2(x,y,z) (24-y-z)/10
#define f3(x,y,z) (33-y-z)/10

int main() {

  float x0,y0,z0,x1,y1,z1,e,ex,ey,ez;
  int count =0;

  printf("valor toleravel erro: \ne ");
  scanf( "%f",&e);

  printf("valor inicial guess for x: \nx0 ");
  scanf( "%f",&x0);
 
  printf("valor inicial guess for x: \nx0 ");
  scanf( "%f",&y0);
  
  printf("valor inicial guess for x: \nx0 ");
  scanf( "%f",&z0);

  printf("\nCount" "\t\tx" "\t\ty" "\t\tz");

  do{
    x1 = f1(x0, y0, z0);
    y1 = f1(x0, y0, z0);
    z1 = f1(x0, y0, z0);

    printf("%d\t\t%f\t%f\t%f\n",count,x1,y1,z1);

    ex = fabs(x1-x0);
    ex = fabs(y1-y0);
    ex = fabs(z1-z0);

    count++;

  x0=x1;
  y0=y1;
  z0=z1;
    
  }while(ex>e && ey>e && ez>e);

    printf("\n valor aproximado:\n x=%0.3f\n y=%0.3f\n z=%0.3f\n",x1,y1,z1);
  
 return 0 ;
  }