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
//check the stack is not full
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
//pushing element in the stack
int push(struct stack *ptr,int value){
    if(isfull(ptr)){
        printf("Stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
//poping element in the stack
int pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("Stack underflow\n");
    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top--;
    }
}
//checking the position to all element in the stack
int peek(struct stack *ptr,int i){
    int arrind=ptr->top-i+1;
    if(arrind<0){
        printf("Invalid input and Choose operation fom the above option\n");
    }
    else{
        return arrind;
    }
}
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int *)malloc(sizeof(int));
    printf("%d\n",push(s,45));
    printf("%d",push(s,12));

    printf("\n\n");

    for(int i=0;i<s->top-i+1;i++){
        printf("Position of %d element is %d ",peek(s,i));
    }

    printf("\n\n");
    
    printf("%d\n",pop(s));
    printf("%d",pop(s));
}