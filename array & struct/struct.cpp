#include <stdio.h>

struct mahasiswa{
	int npm;
	float ipk;
};
typedef struct mahasiswa mhs;

int main(){
	mhs data[3];
	
	data[0].npm = 123;
	data[0].ipk = 3.6;
	data[1].npm = 124;
	data[1].ipk = 3.7;
	data[2].npm = 125;
	data[2].ipk = 3.8;
	
	printf("DATA MAHASISWA\n");
	printf("---------------\n");
	for(int i = 0; i < 3; i++){
		printf("npm %d memiliki ipk %f\n",data[i].npm, data[i].ipk);
	}
	
	printf("\n\nDATA MAHASISWA (Reverse)\n");
	printf("---------------\n");
	for(int i = 2; i >= 0; i--){
		printf("npm %d memiliki ipk %f\n",data[i].npm, data[i].ipk);
	}
	
	printf("\n\nSEARCH DATA\n");
	printf("---------------\n");
	
	int npm_search;
	printf("\n\nMasukkan NPM yang anda cari = ");
	scanf("%d",&npm_search);
	
	bool status = false;
	for(int i = 0; i < 3; i++){
		if(data[i].npm == npm_search){
			printf("DATA DITEMUKAN\n-------------------\n");
			printf("npm %d memiliki ipk %f\n",data[i].npm, data[i].ipk);
			status = true;
			break;
		}
	}
	
	if(!status) printf("DATA TIDAK DITEMUKAN!");
		
	return 0;
}
