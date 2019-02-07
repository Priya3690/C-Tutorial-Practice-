#include<stdio.h>
int multiply (int x, int y)
{
  return x * y;
}
int main(){
	float result;
	result = (float) multiply (3, 6);
	printf("The resutl %f: ",result);
	return 0;
}
