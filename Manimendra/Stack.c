#include <stdio.h>
#include <stdlib.h>
//Global Variable
int size,choice,ele;


//Creating Stack
struct stack{
    int arr[100];
    int top;
    int rear;

}st;

//Inserting Element
void push(int element)
{
    if((st.top)>size)//-1>size20
    {
        printf("\n Stack is Full");
    }
    else
    {
        st.top--;
        printf("\nEnter a Value ");//30
        scanf("%d",&ele);//30
        st.arr[st.top]=ele;
    }
}

//Removing Element
int pop()
{
    if((st.top)==-1)
    {
        printf("\nStack is Empty\n");
    }
    else
    {
        int out;
        out=st.arr[st.top];
        st.top++;
        printf("%d",out);
    }
}

//Peek
int peek()
{
    int display;
    display=st.arr[st.top];
    return display;
}

//Display Stack
void display()
{
    if((st.top)<=0)
    {
        printf("\nElements in the Stack :");
        for(int i=(st.top);i<=0;i++)
        {
            printf("\n%d",st.arr[i]);
        }
    }
    else
    {
        printf("No elements to Display");
    }
}


int main()
{
    st.top=-1;
    printf("Enter a Stack size less than 100 : ");
    scanf("%d",&size);
    printf("\nStack Operations.....");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");

    do{
        again:
        printf("\nEnter Your Choice From given Stack Operations ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                push(ele);
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                printf("%d",peek());
                break;
            }
        case 4:
            {
                display();
                break;
            }
        case 5:
            {
              printf("\n\t ---------------EXIT Point of the program-------------\n\n");
               exit(0);
            }
        default:
            printf("\nEnter a correct choice (1,2,3,4,5)");
            goto again;
        }
    }while(choice<=5);
    return 0;
}
