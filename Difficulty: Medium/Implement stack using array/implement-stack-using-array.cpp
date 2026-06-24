class myStack {
  public:
    int  arr[1000];
        int size;//max size
        int top;
    myStack(int n) {
        // Define Data Structures
        size=n;
        top=-1;
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top==-1)
        return 1;
        else return 0;
    }

    bool isFull() {
        // check if the stack is full
        if(top==size-1)
        return 1;
        else return 0;
        
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(top==size-1)
        return;
        else{
        top++;
        arr[top]=x;
        }
        
    }

    void pop() {
        // removes an element from the top of the stack
        if(top==-1) return ;
        top--;
        
    }

    int peek() {
        // Returns the top element of the stack
        if(top==-1) return -1;
        return arr[top];
        
    }
};