#include <stdio.h>

#define IPK 4.00

struct biodata{
	char *nama;
	int umur;
	char *hobi;
};

int main () {
	struct biodata mahasiswa1;
	
	mahasiswa1.nama = "Park";
	mahasiswa1.umur = 19;
	mahasiswa1.hobi = "Coding";

	printf("Nama : %s \n", mahasiswa1.nama);
	printf("Umur : %i \n", mahasiswa1.umur);
	printf("Hobi : %s \n", mahasiswa1.hobi);
	printf("IPK  : %.2f ",IPK);
}