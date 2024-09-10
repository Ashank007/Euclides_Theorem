#include <stdio.h>

int main()
{
    int first_num,second_num,remaninder=1,quotient,new1,new2;
    printf("Enter the First Number :- ");
    scanf("%d",&first_num);
    new1 = first_num;
    printf("Enter the Second Number :- ");
    scanf("%d",&second_num);
    new2 = second_num;
    if(second_num>first_num)
    {
        int temp = second_num;
        second_num = first_num;
        first_num = temp;
    }
    while(remaninder)
    {
    remaninder = first_num %second_num;
    first_num = second_num;
    second_num = remaninder;
    }
    printf("GCD of %d and %d is %d",new1,new2,first_num);
    return 0;
}