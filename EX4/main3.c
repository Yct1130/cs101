#include <iostream>

int main()
{
    int k=0;
    for (int x=1; x<=9;){
    
        printf("%d*%d=%d\t",x,k,x*++k);
        if (k==9){
            x++;
            k=0;
            printf("\n");
        }
    }

    return 0;
}
