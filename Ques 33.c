#include <stdio.h>
int main(){
	float highest_rainfall, current_rainfall;
	
    printf("Enter the highest rainfall ever: ");
    scanf("%f", &highest_rainfall);

    printf("Enter the current rainfall: ");
    scanf("%f", &current_rainfall);

    if (current_rainfall > highest_rainfall) {
        printf("Current rainfall is the highest ever!\n");
        highest_rainfall = current_rainfall;
    } else {
        printf("Current rainfall is not the highest ever.\n");
    }

    printf("Highest rainfall ever: %.2f\n", highest_rainfall);

    return 0;
}
