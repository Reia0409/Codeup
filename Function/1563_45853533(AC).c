#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}

int mid(int a, int b, int c){
	int x1, y1, x2, y2, low, high, sum, result;
	x1 = min(a, b);
	y1 = min(b, c);
	low = min(x1, y1);
	
	x2 = max(a, b);
	y2 = max(b, c);
	high = max(x2, y2);
	
	result = a+b+c-low-high;
	return result;
}
int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}
