#include <stdio.h>

int main()
{
	int npm[5] = {123,124,125,126,127};
	float ipk[5] = {3.1, 3.6, 3.8, 3.0, 3.4};
	
	printf("DATA MAHASISWA\n");
	printf("---------------\n");
	for(int i = 0; i < 5; i++){
		printf("npm %d memiliki ipk %f\n",npm[i], ipk[i]);
	}
	
	printf("\n\nDATA MAHASISWA (Reverse)\n");
	printf("---------------\n");
	for(int i = 4; i >= 0; i--){
		printf("npm %d memiliki ipk %f\n",npm[i], ipk[i]);
	}
	
	printf("\n\nSEARCH DATA\n");
	printf("---------------\n");
	int npm_search;
	printf("\n\nMasukkan NPM yang anda cari = ");
	scanf("%d",&npm_search);
	printf("%d",npm_search);
	bool status = false;
	for(int i = 0; i < 5; i++){
		if(npm[i] == npm_search){
			printf("DATA DITEMUKAN\n-------------------\n");
			printf("npm %d memiliki ipk %f\n",npm[i], ipk[i]);
			status = true;
			break;
		}
	}
	
	if(!status) printf("DATA TIDAK DITEMUKAN!");
	
	return 0;
}

