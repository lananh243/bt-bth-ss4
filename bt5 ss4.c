#include<stdio.h>
int main(){
	int day,month,year;
	printf("Kiem tra year co hop le khong ?:");
	scanf("%d",&year);
	printf("Kiem tra month co hop le khong ?:");
	scanf("%d",&month);
	printf("Kiem tra day co hop le khong ?:");
	scanf("%d",&day);
    if (year>0){
		printf("nam hop le\n",year);
	}else{
		printf("nam khong hop le\n",year);
		}
    if (month<=1 || month<=12){
    	printf("thang hop le\n",month);
	}else {
		printf("thang khong hop le\n",month);
	}
	if (day>0 && day< 30){
		printf("ngay hop le\n",day);
	}else{
		printf("ngay khong hop le\n",day);
	}
}

