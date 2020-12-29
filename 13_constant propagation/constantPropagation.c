/*
Write a program to perform constant propagation?
Amal Mohan K
S7-CSE 
Roll:No:10
*/

#include <stdio.h>

int main ()
{
  int c;
  float r, pi = floor((22.0 / 7.0)*100)/100;//pi value is calculated by 22/7 and assigned to pi variable
  do
    {
      printf ("\nMENU");
      printf
	("\n1. Find perimeter and area of circle without constant propagation");
      printf
	("\n2. Find perimeter and area of circle with constant propagation Code optimization");
      printf ("\n3. Exit");
      printf ("\nEnter your Option : ");
      scanf ("%d", &c);
      switch (c)
	{
	case 1:

	  printf ("Enter the radius of circle :");
	  scanf ("%f", &r);
	  printf ("Perimeter = %0.2f", 2 * pi * r);	//pi value is accesed from memory and perimeter is found
	  printf ("\nArea = %0.2f", pi * r * r);	//pi value is accesed from memory and area is found;break;
	  break;
	case 2:
	  printf ("Enter the radius of circle :");
	  scanf ("%f", &r);
	  printf ("Perimeter = %0.2f", 2 * 3.14 * r);	//pi value is replace with 3.14 hence code optimized by constant propagation
	  printf ("\nArea = %0.2f", 3.14 * r * r);	//pi value is replace with 3.14 hence code optimized by constant propagation

	  break;
	}

    }
  while (c != 3);

  return 0;
}
