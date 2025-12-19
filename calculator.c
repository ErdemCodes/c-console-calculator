#include <stdio.h>
#include <math.h>

void Addition(int x1num, int x2num) {
	printf("\n%d + %d = %d\n", x1num, x2num, x1num + x2num);
}
void Subtraction(int x1num, int x2num) {
	printf("\n%d - %d = %d\n", x1num, x2num, x1num - x2num);
}
void Division(int x1num, int x2num) {
	if (x2num == 0) {
        printf("\nHata: Bir sayi 0'a bolunemez!\n");
    } else {
        printf("\nSonuc: %d / %d = %.2f\n", x1num, x2num, (float)x1num / x2num);
    }
}
void Multiplication(int x1num, int x2num) {
	printf("\n%d x %d = %d\n", x1num, x2num, x1num * x2num);
}
void SquareRoot(int x1num) {
	if (x1num < 0) {
        printf("\nHata: Negatif sayilarin karekoku reel sayilarda yoktur.\n");
    } else {
        printf("\nSonuc: sqrt(%d) = %.2f\n", x1num, sqrt(x1num));
    }
}
void Exponentiation(int x1num, int x2num) {
	printf("\n%.0f\n", pow(x1num, x2num));
}

int main()
{
	int x1num, x2num, sonuc, mainnum;
	do {
		printf("--Hesap makineme hos geldiniz. \n");
		printf("--Toplama islemi icin  1       \n");
		printf("--Cikarma islemi icin  2       \n");
		printf("--Carpma islemi icin   3       \n");
		printf("--Bolme islemi icin    4       \n");

		printf("--Karekok alma islemi icin 5       \n");
		printf("--Us alma islemi icin  6       \n");
		printf("--Cikis icin           0       \n");
		printf("--Giriniz                      \n");
		scanf("%d", &mainnum);

		switch (mainnum) {
		case 1:
			printf("Toplamak istediginiz iki sayiyi giriniz \n");
			scanf("%d %d", &x1num, &x2num);
			Addition(x1num, x2num);
			break;

		case 2:
			printf("Cikarmak istediginiz iki sayiyi giriniz \n");
			scanf("%d %d", &x1num, &x2num);
			Subtraction(x1num, x2num);
			break;

		case 3:
			printf("Carpmak istediginiz iki sayiyi giriniz \n");
			scanf("%d %d", &x1num, &x2num);
			Multiplication(x1num, x2num);
			break;

		case 4:
			printf("Bolmek istediginiz iki sayiyi giriniz \n");
			scanf("%d %d", &x1num, &x2num);
			Division(x1num, x2num);
			break;

		case 5:
			printf("Karekokunu almak istediginiz sayiyi giriniz \n");
			scanf("%d", &x1num);
			SquareRoot(x1num);
			break;
		case 6:
			printf("Ussunu almak istediginiz sayiyi once taban sonra kuvvet olarak giriniz \n");
			scanf("%d %d", &x1num, &x2num);
			Exponentiation(x1num, x2num);
			break;

		}
	} while (mainnum != 0);

	return 0;

}
