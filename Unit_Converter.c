#include <stdio.h>

int main() {
    char category;
    int choice;
    float temperature;
    float mass;
    float length;
    char name[50];

    printf("\n");
    printf("************************************************************\n");
    printf("*                    Welcome to Unit Converter!            *\n");
    printf("************************************************************\n");
    printf("\n");
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s\n", name);

    printf("\n");
    printf("Here is a list of conversations to choose from:\n");
    printf("T - Temperature\n");
    printf("M - Mass\n");
    printf("L - Length\n");
    printf("Please enter the letter you want to convert: ");
    scanf(" %c", &category);

    if (category == 'T') {
        printf("\n************** Welcome to Temperature Converter **************\n");
        printf("1 - Celsius to Fahrenheit\n");
        printf("2 - Fahrenheit to Celsius\n");
        printf("3 - Celsius to Kelvin\n");
        printf("4 - Kelvin to Celsius\n");
        printf("5 - Fahrenheit to Kelvin\n");
        printf("6 - Kelvin to Fahrenheit\n");
        printf("Please enter the number you want to convert: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter the Celsius degree: ");
            scanf("%f", &temperature);
            printf("It is %.2f Fahrenheit.\n", (temperature * 9 / 5) + 32);
        } else if (choice == 2) {
            printf("Enter the Fahrenheit: ");
            scanf("%f", &temperature);
            printf("It is %.2f Celsius.\n", (temperature - 32) * 5 / 9);
        } else if (choice == 3) {
            printf("Enter the Celsius degree: ");
            scanf("%f", &temperature);
            printf("It is %.2f Kelvin.\n", temperature + 273.15);
        } else if (choice == 4) {
            printf("Enter the Kelvin: ");
            scanf("%f", &temperature);
            printf("It is %.2f Celsius.\n", temperature - 273.15);
        } else if (choice == 5) {
            printf("Enter the Fahrenheit: ");
            scanf("%f", &temperature);
            printf("It is %.2f Kelvin.\n", (temperature - 32) * 5 / 9 + 273.15);
        } else if (choice == 6) {
            printf("Enter the Kelvin: ");
            scanf("%f", &temperature);
            printf("It is %.2f Fahrenheit.\n", (temperature - 273.15) * 9 / 5 + 32);
        } else {
            printf("Invalid choice.\n");
        }

        // Temperature conversion block (unchanged)
    } else if (category == 'M') {
        printf("\n***************** Welcome to Mass Converter *****************\n");
        printf("1 - Kilogram to Pound\n");
        printf("2 - Pound to Kilogram\n");
        printf("3 - Kilogram to Gram\n");
        printf("4 - Gram to Kilogram\n");
        printf("5 - Pound to Gram\n");
        printf("6 - Gram to Pound\n");
        printf("Please enter the number you want to convert: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter the Kilogram: ");
            scanf("%f", &mass);
            printf("It is %.2f pounds.\n", mass * 2.20462);
        } else if (choice == 2) {
            printf("Enter the pound: ");
            scanf("%f", &mass);
            printf("It is %.2f Kilograms.\n", mass / 2.20462);
        } else if (choice == 3) {
            printf("Enter the Kilogram: ");
            scanf("%f", &mass);
            printf("It is %.2f grams.\n", mass * 1000);
        } else if (choice == 4) {
            printf("Enter the gram: ");
            scanf("%f", &mass);
            printf("It is %.2f Kilograms.\n", mass / 1000);
        } else if (choice == 5) {
            printf("Enter the Pound: ");
            scanf("%f", &mass);
            printf("It is %.2f grams.\n", mass * 453.592);
        } else if (choice == 6) {
            printf("Enter the gram: ");
            scanf("%f", &mass);
            printf("It is %.2f Pounds.\n", mass / 453.592);
        } else {
            printf("Invalid choice.\n");
        }

        // Mass conversion block (unchanged)
    } else if (category == 'L') {
        printf("\n**************** Welcome to Length Converter ****************\n");
        printf("1 - Meter to Inch\n");
        printf("2 - Inch to Meter\n");
        printf("3 - Meter to Foot\n");
        printf("4 - Foot to Meter\n");
        printf("Please enter the number you want to convert: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter the Kilogram: ");
            scanf("%f", &mass);
            printf("It is %.2f pounds.\n", mass * 2.20462);
        } else if (choice == 2) {
            printf("Enter the pound: ");
            scanf("%f", &mass);
            printf("It is %.2f Kilograms.\n", mass / 2.20462);
        } else if (choice == 3) {
            printf("Enter the Kilogram: ");
            scanf("%f", &mass);
            printf("It is %.2f grams.\n", mass * 1000);
        } else if (choice == 4) {
            printf("Enter the gram: ");
            scanf("%f", &mass);
            printf("It is %.2f Kilograms.\n", mass / 1000);
        } else if (choice == 5) {
            printf("Enter the Pound: ");
            scanf("%f", &mass);
            printf("It is %.2f grams.\n", mass * 453.592);
        } else if (choice == 6) {
            printf("Enter the gram: ");
            scanf("%f", &mass);
            printf("It is %.2f Pounds.\n", mass / 453.592);
        } else {
            printf("Invalid choice.\n");
        }

        // Length conversion block (unchanged)
    } else {
        printf("\nInvalid category.\n");
        return 1; // Exit the program with an error code
    }

    printf("\nThanks for visiting my code!\n");

    return 0;
}