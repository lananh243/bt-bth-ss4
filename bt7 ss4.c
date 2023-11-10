#include<stdio.h>
int main(){
	int luongCoBan;
	int soNgayCong;
	int congThang = 26;
	printf("nhap luong co ban: ");
	scanf("%d", &luongCoBan);
	printf("nhap so ngay cong: ");
	scanf("%d", &soNgayCong);
	float luongThang;
	if (soNgayCong=congThang){
	luongThang = luongCoBan*(soNgayCong/congThang);
	printf("%.2f", luongThang);	
	}
}
