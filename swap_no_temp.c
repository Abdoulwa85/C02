#include <stdio.h>
// Ce rogramme permet de lire deux nombres et de les inverses sans utiliser de variables temporaires
int main() {
    int a, b;
    // Lecture de deux nombres
    scanf("%d %d", &a, &b);
    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Après échange: a = %d, b = %d\n", a, b);
    return 0;
}
