# include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d",& n);
	int i=1;
	int s=0;
	
	while (i<n){
		if (n%i==0){
			s=s+i;
		}
		i++;
	}
	{
		if (s==n){
			printf("%d la so hoan hao",n);
		}else{
			printf ("%d khong phai la so hoan hao",n);
		}
	}
	}
	
	
	
	
	



