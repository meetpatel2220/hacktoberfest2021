#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct Queue *q, int value)
{
    if (isFull(q) == 1)
    {
        printf("Queue overflow");
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
    }
}

int dequeue(struct Queue *q)
{
    if (isEmpty(q) == 1)
    {
        printf("Queue Underflow");
    }
    else
    {
        q->f++;
        return q->arr[q->f];
    }
}

int main()
{
    struct Queue *sp = (struct Queue *)malloc(sizeof(struct Queue));
    sp->size = 10;
    sp->f = sp->r = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    if (isFull(sp)) // we can call this after qneuation only , cause after dequation r remains the same and as we check isFull condition with r so it will say queue is full 
    {
        printf("Queue is completely Full\n");
    }
    if (isEmpty(sp))
    {
        printf("Queue is empty\n");
    }

    enqueue(sp, 55);
    enqueue(sp, 56);
    enqueue(sp, 57);
    enqueue(sp, 58);
    enqueue(sp, 59);
    enqueue(sp, 60);
    enqueue(sp, 61);
    enqueue(sp, 62);
    enqueue(sp, 63);
    

    if (isFull(sp)) // we can call this after qneuation only , cause after dequation r remains the same and as we check isFull condition with r so it will say queue is full 
    {
        printf("Queue is completely Full\n");
    }
    if (isEmpty(sp))
    {
        printf("Queue is empty\n");
    }

    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("The value dequeued is : %d\n", dequeue(sp));

    
    if (isEmpty(sp))
    {
        printf("Queue is empty\n");
    }
    if (isFull(sp)) // we can call this after qneuation only , cause after dequation r remains the same and as we check isFull condition with r so it will say queue is full 
    {
        printf("Queue is completely Full\n");
    }

    enqueue(sp, 66);

    if (isFull(sp)) // we can call this after qneuation only , cause after dequation r remains the same and as we check isFull condition with r so it will say queue is full 
    {
        printf("Queue is completely Full\n");
    }
    return 0;
}

