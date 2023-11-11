#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
//check the stack is not empty
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("Stack underflow\n");
    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top--;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int push(struct stack *ptr,int value){
    if(isfull(ptr)){
        printf("Stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=8;
    s->top=-1;
    s->arr=(int*)malloc(sizeof(int));
    printf("%d\n",push(s,45));
    printf("%d",push(s,12));
    printf("\n\n");
    printf("%d\n",pop(s));
    printf("%d",pop(s));
}