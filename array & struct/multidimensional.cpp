#include <stdio.h>
#include <string.h>

struct mahasiswa{
	char npm[10];
	char nama[20];
};
typedef struct mahasiswa mhs;

struct matakuliah{
	char mk[30];
	int sks;
};
typedef struct matakuliah mk;

int get_number(char nilai);

int main(){
	
	mk subject[5];
	strcpy(subject[0].mk, "Pemrograman Dasar");
	subject[0].sks = 4;
	strcpy(subject[1].mk, "Algoritma");
	subject[1].sks = 4;
	strcpy(subject[2].mk, "Matematika Komputasi");
	subject[2].sks = 3;
	strcpy(subject[3].mk, "Agama");
	subject[3].sks = 3;
	strcpy(subject[4].mk, "Pancasila");
	subject[4].sks = 3;
	
	
	mhs student[3];
	strcpy(student[0].npm, "18001");
	strcpy(student[0].nama, "mahasiswa 1");
	strcpy(student[1].npm, "18002");
	strcpy(student[1].nama, "mahasiswa 2");
	strcpy(student[2].npm, "18003");
	strcpy(student[2].nama, "mahasiswa 3");
	

	char nilai[][5] = {
			{'A', 'A', 'A', 'A', 'A'},
			{'B', 'B', 'A', 'B', 'B'},
			{'A', 'C', 'B', 'B', 'E'},
	};
	
	for(int i=0; i<3 ; i++){
		float cal = 0.0;
		int total_sks = 0;
		printf("NPM = %s \n",student[i].npm);
		printf("NPM = %s \n",student[i].nama);
		printf("-------------------------------\n");
		for(int j=0; j<5 ; j++){
			printf("Mata Kuliah = %s (%d SKS)\n",subject[j].mk, subject[j].sks);
			printf("\tNilai = %c (Konversi = %d)\n",nilai[i][j], get_number(nilai[i][j]));
			cal += (subject[j].sks * get_number(nilai[i][j]));
			total_sks += subject[j].sks;
		}
		printf("******************************\n");
		printf("IPK = %f\n", cal/total_sks);
		printf("==============================\n");
		printf("==============================\n");
	}	
}

int get_number(char nilai){
	switch(nilai){
		case 'A':
			return 4; 
			break;
		case 'B':
			return 3; 
			break;
		case 'C':
			return 2; 
			break;
		case 'D':
			return 1; 
			break;
		case 'E':
			return 0; 
			break;
		default:
			return -1;
		break;
	}

}
