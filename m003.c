/* m003.c - Check if a positive integer is prime.

   This program takes a non-zero positive integer read as a 
   command line argument and outputs 1 or 0 depending on
   whether the number is prime or not.

   E.g.

      command line    : m003 5 
      expected output : 1

   Directions:

      Please, edit function is_prime();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Verify if the positive integer 'a' is prime. */

int is_prime (int a)
{
  int i, r, p;

r=1;
  if(a>2)
  {
   for(i=2;i<a;i++)
   {
     if(a%i == 0)
      r=0;
   } 
  }
  if(a==2)
    {
      r=1;
    }
    else  
      if(a==1)
      r=0;
      else
        if(a==0)
          r=0;
    

    if(r==1)
    p=1;
    else
    p=0;
  return p;
}


#define USAGE "m003 <num>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  
  n = atoi (argv[1]);

  printf("%d\n", is_prime (n));
  
  return 0;
}
