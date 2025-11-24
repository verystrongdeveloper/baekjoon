#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[101];
    int index;
} Info;

int compare(const void* a, const void* b) {
    Info* infoA = (Info*)a;
    Info* infoB = (Info*)b;

    if(infoA->age != infoB->age) {
        return infoA->age - infoB->age;
    }
    return infoA->index - infoB->index;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    Info* members = (Info*)malloc(n * sizeof(Info));
    for(int i = 0; i < n; i++) {
        scanf("%d %s", &members[i].age, members[i].name);
        members[i].index = i;
    }

    qsort(members, n, sizeof(Info), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", members[i].age, members[i].name);
    }

    free(members);
    
    return 0;
}