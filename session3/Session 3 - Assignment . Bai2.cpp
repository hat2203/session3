# include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d",&n);
	int i=0;

	while(i+6<n){
		
		i+=6;
	}if(n%6==0){
		printf ("%d la so chia het cho 2 va 3",n);
	}else{
		printf ("%d khong phai so chia het cho 2 va 3",n);
	}
	
}
