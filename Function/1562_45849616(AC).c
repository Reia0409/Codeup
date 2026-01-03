#include <stdio.h>

int n, m;
int min(int x, int y){
	if (x>=y){
		return y;
	}
	else return x;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", min(n, m));
}
