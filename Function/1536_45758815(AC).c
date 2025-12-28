#include <stdio.h>

int n;

long long int d[110];


long long int f(){
	long long int result = d[1];
	for(int j=1;j<=n;j++)
		if(result > d[j])
			result = d[j];
	return result;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}
