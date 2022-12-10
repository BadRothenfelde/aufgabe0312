#include<stdio.h>
int main () {
	int getraenk; 
	printf("Wählen Sie ihr Getränk aus.\n"); 
	printf("\n1.)Wasser: 50ct\n");
	printf("\n2.)Limo: 1 Euro\n");
	printf("\n3.)Bier: 2 Euro\n"); 
	printf("\n Wählen Sie ihr Getränk aus: 1, 2, 3:\n"); 
	scanf("%d", &getraenk); 
	
	float preis = 0; 
	switch(getraenk) {
	case 1: preis = 0.5;
	break; 
	case 2: preis = 1.0; 
	break; 
	case 3: preis = 2.0;
	break; 
	}

	float muenzeinwurf = 0; 
	printf("\nWerfen Sie %.2f Euro ein:", preis); 
	scanf("%f", &muenzeinwurf);
	
	if(muenzeinwurf == preis) {
		printf("\nVielen Dank, bitte nehmen Sie Ihr Getränk!\n");
	}else{
		printf("\nSie haben kein %.2f Euro Stück eingeworfen.\n", preis); 
	}
return 0; 
} 	
	
