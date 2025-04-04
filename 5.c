// utility of unions over structure

#include <stdio.h>

struct MyStruct {
    int a;
    float b;
};

union MyUnion {
    int a;
    float b;
};

int main() {
    struct MyStruct s;
    union MyUnion u;

    s.a = 42;
    s.b = 3.14;

    u.a = 42;
    printf("Union a: %d\n", u.a);

    u.b = 3.14;
    printf("Union b: %.2f\n", u.b);

    printf("Size of structure: %lu bytes\n", sizeof(s));
    printf("Size of union: %lu bytes\n", sizeof(u));

    return 0;
}