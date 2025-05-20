#include <stdio.h>
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
