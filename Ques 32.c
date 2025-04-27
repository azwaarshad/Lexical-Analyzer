#include <stdio.h>
int main(){
	float u, a, t;
    float v, s;
    
    printf("Enter initial velocity: ");
    scanf("%f", &u);

    printf("Enter acceleration: ");
    scanf("%f", &a);

    printf("Enter time elapsed: ");
    scanf("%f", &t);

    v = u + (a * t);
    s = (v * t) + (0.5 * a * t * t);

    printf("Final velocity: %.2f\n", v);
    printf("Distance traversed: %.2f\n", s);

    return 0;
}
