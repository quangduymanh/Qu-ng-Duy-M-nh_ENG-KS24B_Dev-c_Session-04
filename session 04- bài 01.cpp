#include <stdio.h>
int main(){
	int age;
	printf("moi ban nhap vao so ban muon kiem tra:");
	scanf("%d",&age);
	if (age>=0){
		printf("so cua ban là so duong.\n");
	}else{
	
		printf("so cua ban la so am.\n");
	}
	
	return 0;
}
