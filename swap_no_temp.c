#include <stdio.h>
// Ce programme permet de lire deux nombres et les inverses sans utiliser de variables temporaire
int main() {
int a, b;
// Lecture de deux nombres
scanf("%d %d", &a, &b);
// Échnge sans variable temporaire
a = a + b;
b = a - b;
a = a - b;
printf("Apres échange : a = %d, b = %d\n", a, b);
}
