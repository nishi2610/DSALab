#include<stdio.h>
struct stack{
    int arr[5];
    int top;
    };
int isFull();
int isEmpty();
void push(int newele);
void pop();
void traverse();
void peek();
struct stack s;
int main(){
    s.top=-1;
    int newele, a,n=0;
    while(n==0){
        printf("Which operation do you want to do on the stack??\n1.push new element\n2. pop element\n3.peek\n4.traverse the stack\n5. exit");
        scanf("%d",&a);
        switch(a){
        case 1:
            printf("enter new element:");
            scanf("%d",&newele);
            push(newele);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            traverse();
            break;
        case 5:
            n=1;
            break;
        default:
            printf("WRONG INPUT!!\n");
            break;}}
        return 0;}
int isFull(){
    if (s.top==4)
        return 1;
    return 0;}
int isEmpty(){
    if (s.top==-1)
        return 1;
    return 0;
}
void push(newele){
    if(isFull())
        printf("the stack is full!");
    else
        s.arr[++s.top]=newele;
}
void pop(){
    if(isEmpty())
        printf("stack is empty!!");
    else
        printf("the last element was: %d\n", s.arr[s.top--]);}
void peek(){
    if(isEmpty())
        printf("stack is empty!!");
    else
        printf("%d\n",s.arr[s.top]);}
void traverse(){
    for(int i=s.top; i>=0;i--){
        printf("The stack is:\n%d\t",s.arr[i]);}}
