#include <stdio.h>

int n;



void f(int x){
	if(x<0) printf("%s", "negative");
	else if(x==0) printf("%s", "zero");
	else printf("%s", "positive");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
