#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int factorial(int x);
int main(void)
{

   int i,order;
   double e ,*terms;

   printf("enter the polynomialorder you wish to use\n");
   if (scanf ("%d",&order) !=1)
   {
    printf("Did not enter a number\n");

    return 1;
    }


   terms = (double *)malloc(order * sizeof(double));
    for (i=0; i<order;i++)
    {
     terms[i]=1.0/ (double)factorial(i+1);

    }

    e=1.0;

    for (i=0;i<order;i++)
    {
      e=e+terms[i];
    }

    free(terms);
    printf(" e is estimated as %.10lf, with difference %e\n",e,e-exp(1.0));
     return 0;
}
     int factorial(int n)
     {
      if (n<0)
      {

      printf("!! Error:Negative number passed to factorial\n");
       }
       else if (n==0)
       {
       return 1 ;
       }
       else
       {
         return (n*factorial(n-1));
        }
         }
