#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
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
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=8;
    s->top=-1;
    s->arr=(int*)malloc(sizeof(int));
    printf("%d",push(s,45));
    printf("%d",push(s,12));
}