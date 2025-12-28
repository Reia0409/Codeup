#include <stdio.h>

int n;



char grade(int x){
	if(x>=90) return 'A';
	else if(x<90 && x>=80) return 'B';
	else if(x<80 && x>=70) return 'C';
	else if(x<70 && x>=60) return 'D';
	else return 'F';
}
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
