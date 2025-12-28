#include <stdio.h>

int n;



void f(int x){
	if(x==0) printf("%s", "zero");
	else printf("%s", "non zero");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
