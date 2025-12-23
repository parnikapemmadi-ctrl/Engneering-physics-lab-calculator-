#include <stdio.h>
#include <math.h>

void velocity() {
    float d, t;
    printf("Enter distance: ");
    scanf("%f", &d);
    printf("Enter time: ");
    scanf("%f", &t);
    printf("Velocity = %.2f\n", d / t);
}

void acceleration() {
    float u, v, t;
    printf("Enter initial velocity: ");
    scanf("%f", &u);
    printf("Enter final velocity: ");
    scanf("%f", &v);
    printf("Enter time: ");
    scanf("%f", &t);
    printf("Acceleration = %.2f\n", (v - u) / t);
}

void force() {
    float m, a;
    printf("Enter mass: ");
    scanf("%f", &m);
    printf("Enter acceleration: ");
    scanf("%f", &a);
    printf("Force = %.2f\n", m * a);
}

void energy() {
    float m, v;
    printf("Enter mass: ");
    scanf("%f", &m);
    printf("Enter velocity: ");
    scanf("%f", &v);
    printf("Kinetic Energy = %.2f\n", 0.5 * m * v * v);
}

void power() {
    float w, t;
    printf("Enter work done: ");
    scanf("%f", &w);
    printf("Enter time: ");
    scanf("%f", &t);
    printf("Power = %.2f\n", w / t);
}

int main() {
    int choice;
    do {
        printf("\n--- Engineering Physics Lab Calculator ---\n");
        printf("1. Velocity\n");
        printf("2. Acceleration\n");
        printf("3. Force\n");
        printf("4. Kinetic Energy\n");
        printf("5. Power\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: velocity(); break;
            case 2: acceleration(); break;
            case 3: force(); break;
            case 4: energy(); break;
            case 5: power(); break;
            case 6: printf("Exiting program...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}
