#include <stdio.h>
#include <stdlib.h>

int main() {
	int Ember_A = 0;
	int Ember_B = 0;
	int Tindakan = 0;
	int Langkah = 0;

	printf( "Di siang terik, kamu terbangun di bawah pohon beringin yang rindang,\n"
			"kamu bangkit dan memutuskan untuk membeli padi dan kapas di kecamatan.\n\n"
			"...\n\n"
			"Dalam perjalanan pulang, kamu bertemu doremonangis yang sedang kebingungan\n"
			"Di tangannya ada EMBER_A yang berkapasitas 3L, serta EMBER_B berkapasitas 5L\n"
			"Doremonangis meminta bantuan ke kamu untuk menghasilkan air 4L dari kedua\n"
			"ember tersebut. Bisakah kamu membantunya?\n\n");

	while (Ember_B != 4) {
		printf("Ember A = %d	Ember B = %d\n", Ember_A, Ember_B);
		printf("Langkah = %d\n\n", Langkah);
		printf( "1. Isi penuh ember A\n"
				"2. Isi penuh ember B\n"
				"3. Tuang ember A ke ember B\n"
				"4. Tuang ember B ke ember A\n"
				"5. Kosongkan ember A\n"
				"6. Kosongkan ember A\n\n"
		    	"Pilih tindakan: ");
		scanf("%d", &Tindakan);
		if (Tindakan == 1) {
			Ember_A = 3;
		} else if (Tindakan == 2) {
			Ember_B = 5;
		} else if (Tindakan == 3) {
			while (Ember_A > 0 && Ember_B < 5) {
			Ember_B += 1;
			Ember_A -= 1;
			}
		} else if (Tindakan == 4) {
			while (Ember_A < 3 && Ember_B > 0) {
			Ember_A += 1;
			Ember_B -= 1;
			}
		} else if (Tindakan == 5) {
			Ember_A = 0;
		} else if (Tindakan == 6) {
			Ember_B = 0;
		}
		Langkah++;
	}
	printf("Ember A = %d	Ember B = %d\n", Ember_A, Ember_B);
	printf("Langkah = %d\n\n", Langkah);
	printf( "Selamat!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"
			"Kamu berhasil membantu Doremonangis \\>o</ \n\n");
	
	system("pause");
}
