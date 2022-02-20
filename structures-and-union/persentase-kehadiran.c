#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa {
    char nama[80];
    int NIM;
    float kehadiran;
};

struct mahasiswa Kelas[50];
int i=0;
// char stateInput[2];
int stateInput = 1;

int main() {
    // strcpy(stateInput,"Y");
    // while(stateInput == "y" || stateInput == "Y") {
    while(stateInput) {
        scanf("%s", &Kelas[i].nama[80]);
        scanf("%d", &Kelas[i].NIM);
        scanf("%f", &Kelas[i].kehadiran);
        printf("\n%s %d %0.2f\n", Kelas[i].nama, Kelas[i].NIM, Kelas[i].kehadiran);
        if (&Kelas[i].nama[80] == " ") {
            stateInput = 0;
        }
        i++;
    }

    for (i=0;i<50;i++) {
        printf("\n%s %d %0.2f\n", Kelas[i].nama, Kelas[i].NIM, Kelas[i].kehadiran);
    }
    
    system("pause");
}