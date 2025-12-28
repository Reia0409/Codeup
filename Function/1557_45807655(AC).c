#include <stdio.h>

int n;




int f(int x){
	int number = 0;
	for(int i=1; i<=x; i++){
		if(x%i==0){
			number++;
		}
	}
	return number;
}
int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
