class myQueue {
int *arr;
int front,rear,size;
  public:
    myQueue(int n) {
        // Define Data Structures
        arr=new int[n];
        front=-1,rear=-1;
        size=n;
    }

    bool isEmpty() {
        // check if the queue is empty
        return front==-1;
    }

    bool isFull() {
        // check if the queue is full
         return (rear + 1) % size == front;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
       if(isFull()) return;

    if(isEmpty()) {
        front = rear = 0;
    }
    else {
        rear = (rear + 1) % size;
    }

    arr[rear] = x;
        
    }

 void dequeue() {
     if(isEmpty()) return;

    if(front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % size;
    }
}

    int getFront() {
        // Returns the front element of the queue.
         if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getRear() {
        // Return the last element of queue
        if(isEmpty())
        return -1;
        return arr[rear];
    }
};