//6th manual program enqueue and dequeue

#include <stdio.h>
void enqueue(int);
int dequeue();
void displayQueue();
int queue[100],max,i,rear=-1,front=-1,choice;
void enqueue(int number) {
    if (rear == max - 1) {//check for overflow
        printf("Overflow: Queue is full.\n");
    } else {
        rear++;
        queue[rear] = number;//adding number to rear pos by incremneting 
    }

}

int dequeue() {
    if (front == rear) {//if front and rear coincides it means array is empty
        printf("Underflow: Queue is empty.\n");
        return -1; 
    } else {
        front++;//fornt end increment till the pos you want to dequeue
        return queue[front];
    }
}

void displayQueue() {
    if (front == rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Elements in the queue are: ");
        for (int i = front + 1; i <= rear; i++) {//print from front end to rear end
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("\nEnter no of elements to push into Queue: ");
    scanf("%d",&max);
    
    for (int i = 0; i < max; i++) {
        printf("Enter element %d to enqueue: ", i + 1);
        scanf("%d", &num);
        enqueue(num);
    }
    displayQueue();
    
    int del;
    printf("Enter no of elements to dequeue: ");
    scanf("%d",&del);
    for (int i = 0; i <del; i++) {
        int deleted = dequeue();
        if (deleted != -1) {
            printf("Removed element from the queue: %d\n", deleted);
        }
    }
    displayQueue();
    

}
