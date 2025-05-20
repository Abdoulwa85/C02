#include <stdio.h>
// Ce programme permet de lire un entier et de dire s'il est pair ou impair
int main() {
int n;
// Lecture d'un entier
scanf("%d", &n);
// Verifier si pair ou impair
if (n % 2 == 0) {
printf("%d est pair.\n", n);
} else {
printf("%d est impair.\n", n);
}
}
