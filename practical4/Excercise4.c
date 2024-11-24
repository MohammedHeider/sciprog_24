#include <stdio.h>
#include <math.h>
float degtorad(float degarg);
float traprule(int N,float TanArr[N+1]);
int main()
{

   int N=12,i;
   float a=0.0,b_deg=60.0;
   float TanArr[N+1];
   float deg;

   //calculate the area 
   for(i=0; i<=N; i=i+1)
{
   deg=i*5;
   TanArr[i]=tan(degtorad(deg));
   printf("TanArr[%d]= %f\n",i,TanArr[i]);
}

   // sum tan(a)+tan(b)
    float area= traprule(N,TanArr);

   
   printf("Trapezoidal Result is :%f\n",area);
   printf ("Real result is :%f\n",logf(2));
   return 0;
}

float degtorad(float degarg){
   float pi =3.1415927;
   return ( (pi*degarg)/180.0);
}


float traprule(int N,float TanArr[N+1]){
   float area;
   int i;

    area=TanArr[0]+TanArr[N];
    printf("Initial area =%f\n",area);

   for(i=1; i<N; i++){
   area=area+2*TanArr[i];
}

   printf("the value of sum after loop is:%f\n",area);
   float mult_rad=degtorad(60.0-0.0)/(2*N);
   area=mult_rad*area;
   return area;
}
