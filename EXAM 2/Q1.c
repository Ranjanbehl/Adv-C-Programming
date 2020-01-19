#include <stdio.h>
#include <stdlib.h>

int f1(int a)
{
	if ( a <= 0)
	{
	return 0;
	}
	int temp = f1(a - 1);
	temp += a;
	return temp;
}

int f2(int a)
{
if (a <= 0)
	{
	return 0;
	}
int temp1 = f2(a -1);
int temp2 = f2(a - 2);
int temp3 = temp1 + temp2 + a;
return temp3;
}

int f3(int a, int b, int * c, int * d)
{
	(* c)++;
	if ((a <=0) || (b <= 0))
	{
	return 0;
	}
	if (a> b)
	{
	return 1;
	}
	(* d) ++;
	int temp1 = f3(a -1, b,c ,d);
	int temp2 = f3(a, b -1 ,c,d);
	int temp3 = temp1 + temp2;
	return temp3;
}

int main(int argc, char ** argv)
{
	int v1 =f1(4);
	printf("v1 = %d\n", v1); // Q1
	
	int v2 = f2(4);
	printf("v2 = %d\n", v2);
	
	int v3c =0;
	int v3d = 0;
	int v3 = f3(3,3,& v3c, & v3d);
	printf("v3 = %d\n", v3); 
	printf("v3c = %d\n", v3c);
	printf("v3d = %d\n", v3d);
	return EXIT_SUCCESS;
}
