#include <stdio.h>
void printNameAsterisk(const char *name);
int main(){
    const char *name = "Azwa";
	
    printf("Name: %s\n", name);
    printf("Asterisk form: ");
    printNameAsterisk(name);

    return 0;
}

void printNameAsterisk(const char *name){
    if (name == NULL)
        return;

    const char *ptr = name;

    while (*ptr != '\0'){
        printf("*");
        ptr++;
    }
    printf("\n");
}


