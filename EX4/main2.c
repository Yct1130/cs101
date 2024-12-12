#include <stdio.h>

int main()
{
    double pi=4.0;
    int flag=1;
    long ipi=0;
    int x=0;
    for (int i=3; i <=1000000;i+=2){
        if (flag==0){
            pi +=(4.0/i);
            flag++;
        }else{
            pi -=(4.0/i);
            flag--;
        }
        //printf("%d",i);
        ipi=pi*100000;
        //printf(" %d",pi);
        //printf("\n");
        if (ipi==314159){
            x=i;
            printf("%d",x);
            break;
        }
    }
    
    
    
    return 0;
}
