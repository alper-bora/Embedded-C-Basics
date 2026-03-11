#include <stdio.h>

union TestUnion
{
    int x;
    float y;
    char z;
};

struct TestStruct
{
    int x;
    float y;
    char z;
};

int main_enum_union()
{

    printf("Size of the struct: %zu\n", sizeof(struct TestStruct));
    printf("Size of the union: %zu", sizeof(union TestUnion));
    return 0;
}