#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define size 20

typedef struct
{
    char buffer[size];
    int f;
    int r;
    int count;
} CircularBuffer;

CircularBuffer init()
{
    CircularBuffer cb;
    cb.f = 0;
    cb.r = 0;
    cb.count = 0;
    return cb;
}

bool isFull(CircularBuffer cb)
{
    return cb.count == size;
}

bool isEmpty(CircularBuffer cb)
{
    return cb.count == 0;
}

int main()
{
    CircularBuffer cb = init();
    char name[100];
    char suffix[] = "CE-ESY";
    char fullName[150];
    bool overflow = false;

    printf("Enter your name: ");
    scanf("%s", name);

    strcpy(fullName, name);
    strcat(fullName, suffix);

    for (int i = 0; i < strlen(fullName); i++)
    {
        if (isFull(cb))
        {
            overflow = true;
        }
        else
        {
            cb.buffer[cb.r] = fullName[i];
            cb.r = (cb.r + 1) % size;
            cb.count++;
        }
    }

    if (overflow)
        printf("[Status] OverFlow!\n");
    else
        printf("[Status] Success!\n");

    printf("Output: ");
    while (!isEmpty(cb))
    {
        printf("%c", cb.buffer[cb.f]);
        cb.f = (cb.f + 1) % size;
        cb.count--;
    }
    printf("\n");

    return 0;
}
