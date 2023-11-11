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
    int user,b=0;
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int *)malloc(sizeof(int));
    while(b==0){
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Break\n");
        printf("Select operation on stack from the abover operation:-");
        scanf("%d",&user);

        if(user==1){
            if(isfull(s)){
                printf("Stack overflow\n");
            }
            else{
                int value;
                printf("Enter the value to be inserted in the stack:-");
                scanf("%d",&value);
                push(s,value);
                printf("******************************Push operation successfull******************************\n");
            }
        }
        else if(user==2){
            if(isempty(s)){
                printf("Stack underflow\n");
            }
            else{
                pop(s);
                printf("******************************Pop operation is successfull******************************\n");
            }
        }
        else if(user==3){
            if(isempty(s)){
                printf("Stack underflow\n");
            }
            else{
                for(int i=0;i<s->top-i+1;i++){
                    printf("Position of element in the stack is:- %d is %d",i,peek(s,i));
                }
            }
        }
        else if(user==4){
            break;
        }
    }
}