#include<stdio.h>
int main(){
	int thang;
	printf("Nhap mot thang bat ki");
	scanf("%d",&thang);
	int nam;
	printf("Nhap vao mot nam ba ki");
	scanf("%d",&nam);
	switch(thang){
		case 1 : case 3 : case 5: case 7: case 8: case 10: case 12 :
			printf("Thang co 31 ngay");
			break;
		case 4 : case 6 : case 9: case 11:
			printf("Thang co 30 ngay");
			break;
		case 2 :
			if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
                printf("Thang 2 co 29 ngay") ;
            } else {
                printf("Thang 2 co 28 ngay");
            }
            break;
		default: 
		printf("khong co thang nay");
		break;
	}
}
		


