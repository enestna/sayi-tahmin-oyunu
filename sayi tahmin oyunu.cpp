#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	int rastgelesayi,secilensayi,sayiadedi,puan=100;
	srand(time(NULL));
	rastgelesayi=(rand()%100)+1;
	printf("1 ile 100 arasinda bir sayi tuttum\n ");
	printf("bu sayiyi tahmin et!!\n");
	
	while(secilensayi!=-1){
		printf("tahmin sayinizi girin\n");
		scanf("%d",&secilensayi);
		if(secilensayi==-1) break;
		if(secilensayi <0 || secilensayi >100){
			printf("1 ile 100 arasinda bir sayi girmeniz gerekiyor\n");
			continue;
		}
		sayiadedi++;
		if(secilensayi==rastgelesayi){
			printf("tebrikler %d.seferde buldunuz .\n",sayiadedi);break;
		}else if(secilensayi<rastgelesayi){
			printf("ipucu:   daha buyuk bir sayi\n");
		}else{
			printf("ipucu:    daha kucuk bir sayi\n");
		}
			puan-=10;
		
	}
	printf("\n puaniniz 100 uzerinden %d\n",puan <0 ? 0: puan);
	return 0;
}