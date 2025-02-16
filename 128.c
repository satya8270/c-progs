//C Program to Add N Distances Given in inch-feet System using Structures

#include <stdio.h>

typedef struct {
    int feet;
    int inches;
} Distance;

Distance addDistances(Distance d1, Distance d2) {
    Distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    if (sum.inches >= 12) {
        sum.feet += sum.inches / 12;
        sum.inches %= 12;
    }

    return sum;
}

int main() {
    int n;
    Distance total = {0, 0}, temp;

    printf("Enter the number of distances: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter feet and inches for distance %d: ", i + 1);
        scanf("%d %d", &temp.feet, &temp.inches);
        total = addDistances(total, temp);
    }

    printf("\nTotal Distance = %d feet %d inches\n", total.feet, total.inches);
    return 0;
}
