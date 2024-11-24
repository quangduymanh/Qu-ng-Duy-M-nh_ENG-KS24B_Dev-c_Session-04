#include <stdio.h>
int main(){
	int age;
	printf("nhap ban so ban muon kiem tra"\n);
	scanf("%d",&age);
	if(age / 3 == 0 && age / 5 == 0){
		printf("so nay chia het cho 3 va 5"\n);
    }else if (age / 3 == 0){
    	printf("so nay chia het cho 3"\n);
	}else if (age / 5== 0 ){
		printf("so nay chia het cho 5"\n);
	}else{
		printf("so nay khong chia het cho ca 3 va 5"\n);
	}
      return 0;
}


