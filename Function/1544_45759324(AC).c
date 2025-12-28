#include <stdio.h>

int n;



void f(int x){
	for(int j=0; j<x; j++){
		printf("%c", '*');
	}
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
