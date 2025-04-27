#include <stdio.h>
struct Address{
	char streetAddress[25];
	char city[20];
	char state[3];
	char zipCode[6];
};

int main(){
	struct Address location;
	printf("Enter street address: ");
    fgets(location.streetAddress, sizeof(location.streetAddress), stdin);

    printf("Enter city: ");
    fgets(location.city, sizeof(location.city), stdin);

    printf("Enter state: ");
    fgets(location.state, sizeof(location.state), stdin);

    printf("Enter ZIP code: ");
    fgets(location.zipCode, sizeof(location.zipCode), stdin);

    printf("\n------Address------\n");
    printf("Street Address: %s", location.streetAddress);
    printf("City: %s", location.city);
    printf("State: %s", location.state);
    printf("ZIP Code: %s", location.zipCode);

    return 0;
}
