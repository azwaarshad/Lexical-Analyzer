#include <stdio.h>
int main(){
	float weight, height, bmi;
    int choice;

    printf("Enter your weight:\n");
    scanf("%f", &weight);
    printf("Enter your height:\n");
    scanf("%f", &height);

    printf("Enter 1 for pounds and inches or 2 for kilograms and meters:\n");
    scanf("%d", &choice);

    if (choice == 1) {
        bmi = (weight * 703) / (height * height);
    }
    else if (choice == 2) {
        bmi = weight / (height * height);
    }
    else {
        printf("Invalid choice.");
        return 0;
    }

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 25) {
        printf("Normal\n");
    }
    else if (bmi >= 25 && bmi < 30) {
        printf("Overweight\n");
    }
    else {
        printf("Obese\n");
    }

    return 0;

}
