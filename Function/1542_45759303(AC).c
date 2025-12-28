#include <stdio.h>

int n;



void f(int x){
	int n = 0;
	for(int j=2;j<x;j++){
		if (x%j == 0){
			n++;
			break;
		}
	}
	if(n==0) printf("%s", "prime");
	else printf("%s", "composite");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
