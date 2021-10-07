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
    if ((q->r + 1) % q->size == q->f)
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
        printf("Queue overflow\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = value;
        printf("Enqued %d\n", value);
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
        q->f = (q->f + 1) % q->size;
        return q->arr[q->f];
    }
}

int main()
{
    struct Queue *sp = (struct Queue *)malloc(sizeof(struct Queue));
    sp->size = 8;
    sp->f = sp->r = 0; // in circular queue you cant start from -1 , it will never reach -1 if u do so
    sp->arr = (int *)malloc(sp->size * sizeof(int *));

    // if (isFull(sp))
    // {
    //     printf("Queue is completely Full\n");
    // }
    // if (isEmpty(sp))
    // {
    //     printf("Queue is empty\n");
    // }

    enqueue(sp, 55);
    enqueue(sp, 56);
    enqueue(sp, 57);
    enqueue(sp, 58);
    enqueue(sp, 59);
    enqueue(sp, 60);
    enqueue(sp, 61);
    // enqueue(sp, 62);

    // if (isFull(sp)) // we can call this after qneuation only , cause after dequation r remains the same and as we check isFull condition with r so it will say queue is full
    // {
    //     printf("Queue is completely Full\n");
    // }
    // if (isEmpty(sp))
    // {
    //     printf("Queue is empty\n");
    // }

    for (int i = sp->f+1; i <= sp->r; i++)
    {
        printf("%d\n", sp->arr[i]);
    }

    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("The value dequeued is : %d\n", dequeue(sp));
    printf("\n");
    for (int i = sp->f+1; i <= sp->r; i++)
    {
        printf("%d\n", sp->arr[i]);
    }
    // if (isEmpty(sp))
    // {
    //     printf("Queue is empty\n");
    // }
    // if (isFull(sp)) // we can call this after qneuation only , cause after dequation r remains the same and as we check isFull condition with r so it will say queue is full
    // {
    //     printf("Queue is completely Full\n");
    // }

    // enqueue(sp, 66);

    // if (isFull(sp)) // we can call this after qneuation only , cause after dequation r remains the same and as we check isFull condition with r so it will say queue is full
    // {
    //     printf("Queue is completely Full\n");
    // }



    return 0;
}
