#include <stdio.h>

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    float principal, rate, time, si;

    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    si = simpleInterest(principal, rate, time);

    printf("Simple Interest = %.2f", si);

    return 0;
}