


typedef struct Node {
    int data;
    int min;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
}MinStack;


MinStack* minStackCreate() {
    MinStack *obj=malloc(sizeof(Node));
    obj->top=NULL;
    return obj;
}

void minStackPush(MinStack* obj, int value) {
    Node *newnode=malloc(sizeof(Node));
    newnode->data=value;
    newnode->next=obj->top;
    if(obj->top==NULL){
        newnode->min=value;
    }    
    else if(newnode->data<obj->top->min){
        newnode->min=newnode->data;
    }else{
        newnode->min=obj->top->min;
    }
    obj->top=newnode;
    
    
}

void minStackPop(MinStack* obj) {
    Node *temp=obj->top;
    obj->top=obj->top->next;
    free(temp);
}

int minStackTop(MinStack* obj) {
    return obj->top->data;
}

int minStackGetMin(MinStack* obj) {
    return obj->top->min;

}

void minStackFree(MinStack* obj) {
    while (obj->top != NULL) {
    Node *temp = obj->top;
    obj->top = obj->top->next;
    free(temp);
}

free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, value);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/