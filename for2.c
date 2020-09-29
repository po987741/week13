#include<stdio.h>
int for2(){
    int i,number=0,sum;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(i=1;i<12;i=i+1){
        printf("%d % d x %d = %d\n",i,number,i,(i*number));
        sum=sum+(i*number);

    }
    printf("Sum=%d",sum);
    return 0;
}
