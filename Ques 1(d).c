#include <stdio.h>

struct Test {
    unsigned int a : 1;
    unsigned int b : 1;
    unsigned int c : 1;
    unsigned int d : 1;
    unsigned int e : 1;
    unsigned int f : 1;
    unsigned int g : 1;
    unsigned int h : 1;
    unsigned int i : 1;
    unsigned int j : 1;
    unsigned int k : 1;
    unsigned int l : 1;
    unsigned int m : 1;
    unsigned int n : 1;
    unsigned int o : 1;
    unsigned int p : 1;
};

int main() {
    struct Test testObj;

    testObj.a = 1;
    testObj.b = 0;
    testObj.c = 1;
    testObj.d = 0;
    testObj.e = 1;
    testObj.f = 0;
    testObj.g = 1;
    testObj.h = 0;
    testObj.i = 1;
    testObj.j = 0;
    testObj.k = 1;
    testObj.l = 0;
    testObj.m = 1;
    testObj.n = 0;
    testObj.o = 1;
    testObj.p = 0;

    printf("----- Bit Field Values -----\n");
    printf("a: %u\n", testObj.a);
    printf("b: %u\n", testObj.b);
    printf("c: %u\n", testObj.c);
    printf("d: %u\n", testObj.d);
    printf("e: %u\n", testObj.e);
    printf("f: %u\n", testObj.f);
    printf("g: %u\n", testObj.g);
    printf("h: %u\n", testObj.h);
    printf("i: %u\n", testObj.i);
    printf("j: %u\n", testObj.j);
    printf("k: %u\n", testObj.k);
    printf("l: %u\n", testObj.l);
    printf("m: %u\n", testObj.m);
    printf("n: %u\n", testObj.n);
    printf("o: %u\n", testObj.o);
    printf("p: %u\n", testObj.p);

    return 0;
}
