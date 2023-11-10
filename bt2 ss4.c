#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap 3 canh cua tam giac:");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && c+a>b && b+c>a){
		printf("Day la tam giac thuong\n");
	}if(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
		printf("Day la tam giac vuong");
	}else if(a==b && b==c){
        printf("Day la tam giac deu");
    }else if(a==b || a==c || b==c){
    	printf("Day la tam giac can");
    }else{
  	  printf("Day khong phai la 1 tam giac");
  }
}
