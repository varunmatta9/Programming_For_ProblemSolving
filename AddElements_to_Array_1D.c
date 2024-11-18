#include <stdio.h>

int array [6] = {1,2,3,4,5};

int start();
int end();
int between();
int print();

int start()
{
    int n=0;
    printf("Enter the element\n");
    scanf("%d",&n);
    
    for(int i=5;i>-1;i--)
    {
        array [i] = array [i-1];
    }
    array [0] = n;
}

int end()
{
    int n=0;
    printf("Enter the element\n");
    scanf("%d",&n);

    array [5] = n;
}

int between()
{
    int n=0,k=0;
    printf("Enter the element\n");
    scanf("%d",&n);
    
    checkpoint:
    printf("Where would you like to enter the element\n");
    scanf("%d",&k);
    
    if(k>0 && k<5)
    {
        for(int i=5;i>=(k-1);i--)
        {
            array [i] = array [i-1];
        }
        array [(k-1)] = n;
    }
    
    else
    {
        printf("Enter a valid location\n");
        goto checkpoint;
    }
    
}

int print ()
{
    for(int i=0;i<6;i++)
    printf("%d ",array[i]);
}


int main()
{
    int choice;
    checkpost:
    
    printf("1.To enter a element at the start");
    printf("\n2.To enter a element in between");
    printf("\n3.To enter a element at the end\n");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1:
        start();
        break;
        
        case 2: 
        between();
        break;
        
        case 3:
        end();
        break;
        
        default:
        printf("Invalid, Choose again\n");
        goto checkpost;
    }  
    
    print();
    return 0;
}
