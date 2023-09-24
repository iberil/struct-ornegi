#include <stdio.h>       //adres defteri ad�nda bir yap� tan�mlay�p i�inde n adet  kisinin ad soyad adres tel ve posta kodu bilgisinin bir yap�da tuttu�umuz program vers.2
#include<stdlib.h>        //scanf kullanrak verileri aliyorum tel ve posta kodunu int t�r�nde tan�ml�yorum


struct adres_defteri {
    char ad[20];
    char soyad[20];
    int tel;
    char adres[100];
    int posta_kodu;
};

int main() {
    int n, i;
    char satir;

    printf("Adres defterine kaydedilecek kisi sayisini giriniz:");
    scanf("%d", &n);
    scanf("%c", &satir);

    struct adres_defteri kisi[n];

    for (i = 0; i < n; i++) {
        printf("\nIsmini giriniz:");
        scanf("%s", kisi[i].ad);

        printf("Soyadini giriniz:");
        scanf("%s", kisi[i].soyad);

        printf("Telefon numarasini giriniz:");
        scanf("%d", &kisi[i].tel);

        printf("Adresini giriniz:");
        scanf("%s", kisi[i].adres);

        printf("Posta kodunu giriniz:");
        scanf("%d", &kisi[i].posta_kodu);
    }

    printf("\n\nAd\tSoyad\tTelefon No\tAdres\t\tPosta Kodu\n");
    printf("=================================================\n");
    for (i = 0; i < n; i++) {
        printf("%s\t%s\t%d\t%s\t%d\n", kisi[i].ad, kisi[i].soyad, kisi[i].tel, kisi[i].adres, kisi[i].posta_kodu);
    }

    return 0;
}

