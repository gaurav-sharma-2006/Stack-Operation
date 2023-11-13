#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
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
int push(struct stack *ptr,char value){
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
        char value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
//Matching the paranthesis
int paranthesis_match(char *exp){
    struct stack *sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='('){
            push(sp,'(');
        }
        else if(exp[i]==')'){
            if(isempty(sp)){
                printf("Stack underflow\n");
            }
            pop(sp);
        }
    }
    if(isempty(sp)){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    char *exp="8*(89*89)*(545*89";
    if(paranthesis_match(exp)){
        printf("paranthesis is matching");
    }
    else{
        printf("paranthesis is not matching");
    }
}