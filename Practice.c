#include <stdio.h>
#include <string.h>

struct students {
    char name[100];
    int roll;
    float cgpa;
};
int main() {
    struct students s1 = {"Chayan", 23, 7.2};
    printf("name %s",s1.name);

    return 0;
}
