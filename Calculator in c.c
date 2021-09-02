#include<stdio.h>
int main()

{
    int num1,num2,result,choice;
    //printf("this is Basic calculator program by c \n");
    printf("Enter num1:\n");
    scanf("%d",&num1);
    printf("Enter num2:\n");
    scanf("%d",&num2);
    printf("Enter Operation\n 1.Addition 2.Subraction 3.Multiplication 4.Division 5.Remainder \n");
    scanf("%d",&choice);

        switch(choice){
        case 1:
        result= num1+num2;
        printf("Addition of two number is %d",result);
        break;
        
        case 2:
        result= num1-num2;
        printf("Subraction of two number is %d",result);
        break;
        
        case 3:
        result= num1*num2;
        printf("Multiplication of two number is %d",result);
        break;
        
        case 4:
        result= num1/num2;
        printf("Division of two number is %d",result);
        break;
        
        case 5:
        result= num1/num2;
        printf("Remainder of two number is %d",result);
        break;
    }
return 0;
}