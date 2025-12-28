#include <stdio.h>

int n;




void f(int x){
	if(x%2==0) printf("%s", "even");
	else printf("%s", "odd");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
