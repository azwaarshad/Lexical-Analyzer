#include <stdio.h>

struct Address {
    char streetAddress[25];
    char city[20];
    char state[3];
    char zipCode[6];
};

struct Student {
    char firstName[15];
    char lastName[15];
    struct Address homeAddress;
};

int main() {
    struct Student stud;

    printf("Enter student's first name: ");
    fgets(stud.firstName, sizeof(stud.firstName), stdin);

    printf("Enter student's last name: ");
    fgets(stud.lastName, sizeof(stud.lastName), stdin);

    printf("\nEnter student's address:\n");
    printf("Enter street address: ");
    fgets(stud.homeAddress.streetAddress, sizeof(stud.homeAddress.streetAddress), stdin);

    printf("Enter city: ");
    fgets(stud.homeAddress.city, sizeof(stud.homeAddress.city), stdin);

    printf("Enter state: ");
    fgets(stud.homeAddress.state, sizeof(stud.homeAddress.state), stdin);

    printf("Enter ZIP code: ");
    fgets(stud.homeAddress.zipCode, sizeof(stud.homeAddress.zipCode), stdin);

    printf("\n-------Student Details-------\n");
    printf("First Name: %s", stud.firstName);
    printf("Last Name: %s", stud.lastName);
    printf("Home Address\n");
    printf("Street Address: %s", stud.homeAddress.streetAddress);
    printf("City: %s", stud.homeAddress.city);
    printf("State: %s", stud.homeAddress.state);
    printf("ZIP Code: %s", stud.homeAddress.zipCode);

    return 0;
}
