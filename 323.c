#include <stdio.h>

int main() {
  int n;

  // Eingabe von n
  printf("Geben Sie n ein: ");
  scanf("%d", &n);

  // Berechnung der n-ten Fibonacci-Zahl
  int f0 = 0;
  int f1 = 1;
  int fn = 0;
  for (int i = 2; i <= n; i++) {
    fn = f0 + f1;
    f0 = f1;
    f1 = fn;
  }

  // Ausgabe von fn
  printf("Die %d-te Fibonacci-Zahl ist: %d\n", n, fn);

  return 0;
}

