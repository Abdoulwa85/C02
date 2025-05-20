#include <stdio.h>
// Ce proggramme permet de lire un entier et calculer son factoriel
int main() {
int n, i;
long fact = 1;
//Lecture de l'entier
scanf("%d", &n);
// Calcul du factoriel
for (i = 1; i <= n; i++) {
fact *= i;
}
printf("Le factoriel de %d est : %ld\n", n, fact);
}
