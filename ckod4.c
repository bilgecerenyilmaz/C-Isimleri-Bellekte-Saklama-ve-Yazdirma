//isim:Bilge Ceren Yilmaz
//no:10658469302
//vs 2022 ile yapildi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main() {
	unsigned int namesCount; //girilecek isim sayisini tutmaya yarayan degisken
	char input[MAX] = { 0 }; //alinacak girisi tutacak karakter dizisi
	char** names;//isimleri tutacak karakter dizisi
	printf("Kac tane isim gireceksin?: ");
	scanf_s("%u", &namesCount); //kullanicidan isim sayisini al 
	names = malloc(namesCount * sizeof(char*));//isimlere minimum bellek tahsis et
	for (unsigned int i = 0; i < namesCount; i++) {
		printf("\n %u. ismi giriniz: ", i + 1);//kullanicidan giris iste
		scanf_s("%99s", input, (unsigned)_countof(input));
		names[i] = (char*)malloc((strlen(input) + 1) * sizeof(char));
		strcpy(names[i], input); //input'u names[i] ye kopyala
	}
	printf("\nGirilen isimler:\n");
	for (unsigned int i = 0; i < namesCount; i++) {
		printf("\n%s", names[i]);//girisleri ekrana yazdir
	}
	for (unsigned int i = 0; i < namesCount; i++) {
		free(names[i]);//isim bellegini serbest birak
	}
	free(names);//names dizisinin bellegini serbest birak
	printf("\n");
	return 0;
}
