#include <stdio.h>

#define SIZE 5

struct RingBuffer
{
    int data[SIZE];
    int write_index;
    int read_index;
};

void increment_write_index(struct RingBuffer *rb, int new_value)
{
    rb->data[rb->write_index] = new_value;
    rb->write_index = (rb->write_index + 1) % SIZE;
};

int increment_read_index(struct RingBuffer *rb)
{
    int temp = rb->data[rb->read_index];
    rb->read_index = (rb->read_index + 1) % SIZE;
    return temp;
}

int main_ring_buffer()
{
    struct RingBuffer rb;
    rb.write_index = 0;
    rb.read_index = 0;

    increment_write_index(&rb, 10);
    increment_write_index(&rb, 20);
    increment_write_index(&rb, 30);
    increment_write_index(&rb, 40);
    increment_write_index(&rb, 50);
    increment_write_index(&rb, 60);

    printf("Printing Ring Buffer:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n ", rb.data[i]);
    }
    printf("Reading the buffer: \n");
    printf("%d\n", increment_read_index(&rb));
    printf("%d\n", increment_read_index(&rb));
    printf("%d\n", increment_read_index(&rb));
    printf("%d\n", increment_read_index(&rb));
    printf("%d\n", increment_read_index(&rb));
    return 0;
}