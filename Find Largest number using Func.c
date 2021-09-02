
#include <stdio.h>
int calclargest(int a ,int b){
    if(a>b)
    printf("%d is larger than %d",a,b);
    else if(b>a)
    printf("%d is larger than %d",b,a);
    else
    printf("both are same value");
}
int main() {
    // Write C code here
    int n1,n2;
    printf("Enter num1 :");
    scanf("%d",&n1);
    printf("Enter num2 :");
    scanf("%d",&n2);
    calclargest(n1,n2);
    
    return 0;
}