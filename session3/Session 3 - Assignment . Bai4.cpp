# include <stdio.h>
int main (){
	int n;
	printf ("nhap n:");
	scanf ("%d", &n);
	int i=0;
	
	while (n>0){
		i=(i*10)+(n%10);
		n/=10;
	}
	printf ("so dao nguoc la %d",i);
}

