#include<stdio.h>
int main () {
	int n; 
	printf("Gebe eíne Zahl ein und ich berechne dessen Fakultät!\n"); 
	scanf("%d", &n); 

int produkt = 1; 
	for (int i = 1; i<=n; i++) {
	produkt = produkt * i; 
	}

printf("Die Fakultät beträgt %d\n", produkt); 

return 0; 
}


