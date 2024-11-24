#include <stdio.h>
int main(){
	int age;
	printf("moi ban nhap so ban muon kiem tra:");
	scanf("%d",&age);
	if(age%2==0){
		printf("so ban vua nhap la so chan:\n");
	}else{
		printf("so ban vua nhap la so le:\n");
	}
	
	return 0;
}
