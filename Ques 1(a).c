#include <stdio.h>
struct Inventory{
	char partName[30];
	int partNumber;
	float price;
	int stock;
	int recorder;
};

int main(){
	struct Inventory item;
	printf("Enter part name: ");
    fgets(item.partName, sizeof(item.partName), stdin);

    printf("Enter part number: ");
    scanf("%d", &item.partNumber);

    printf("Enter price: ");
    scanf("%f", &item.price);

    printf("Enter stock quantity: ");
    scanf("%d", &item.stock);

    printf("Enter recorder value: ");
    scanf("%d", &item.recorder);

    printf("\n------Inventory Items------\n");
    printf("Part Name: %s", item.partName);
    printf("Part Number: %d\n", item.partNumber);
    printf("Price: %.2f\n", item.price);
    printf("Stock: %d\n", item.stock);
    printf("Recorder: %d\n", item.recorder);

    return 0;
}
