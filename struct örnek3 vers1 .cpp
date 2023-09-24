#include<stdio.h>                             //adres defteri ad�nda bir yap� tan�mlay�p i�inde n adet  kisinin ad soyad adres tel ve posta kodu bilgisinin bir yap�da tuttu�umuz program
#include<stdlib.h>                               //gets yap�s�n� kullanacaksak b�t�n verileri char tipinde tutmal�y�z di�er t�rl� hata verdi

struct adres_defteri{
	char ad[20];
	char soyad[20];
	char tel[10];
	char adres[100];
	char posta_kodu[6];	
};

int main()
{
	
	int n,i;
	char satir;
	
	printf("adres defterine kaydedilecek kisi sayisini giriniz:");
	scanf("%d",&n);
	scanf("%c",&satir);
	
	struct adres_defteri kisi[n];
	
	for(i=0;i<n;i++)
	{
		printf("\nismini giriniz:");
		gets(kisi[i].ad);
		
		printf("\nsoyadini giriniz:");
		gets(kisi[i].soyad);
		printf("\ntelefon numarasini giriniz:");
		gets(kisi[i].tel);
		printf("\nadresini giriniz:");
		gets(kisi[i].adres);
		printf("\nposta kodunu giriniz:");
		gets(kisi[i].posta_kodu);
	}
	
	printf("\n\nad\tsoyad\ttelefon no\tadres\tposta kodu\n");
	printf("=============================================\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%s\t%s\t%s\t%s",kisi[i].ad,kisi[i].soyad,kisi[i].tel,kisi[i].adres,kisi[i].posta_kodu);
		printf("\n");
	}
}
