#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0;
int count = 0;

void insert(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE) count++;
}

void print_buffer() {
    int i, index;
    int start = (count < BUFFER_SIZE) ? 0 : head;
    for (i = 0; i < count; i++) {
        index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main() {
    int val, i;
    for (i = 0; i < 7; i++) {
        printf("User enters: ");
        scanf("%d", &val);
        insert(val);
    }
    printf("On print: ");
    print_buffer();
    return 0;
}
