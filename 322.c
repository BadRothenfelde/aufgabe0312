#include<stdio.h>

int main() {
  int n;

  // Eingabe von n
  printf("Geben Sie n ein: ");
  scanf("%d", &n);

  // Berechnung des Produkts von 1*2*3*...*n
  int produkt = 1;
  for (int i = 1; i <= n; i++) {
    produkt = produkt * i;
  }

  // Ausgabe des Produkts
  printf("Das Produkt ist: %d\n", produkt);

  return 0;
}

