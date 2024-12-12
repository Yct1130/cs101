#include <iostream>

int main(){
    int n=7;
    int k=7;
    for (int i=1;i<=n; i++){
        printf(" ");
        for (int j=1; j<=n; ++j){
            if (j<=n-i){
                printf(" ");
            } else{
                printf("%d ",i);
            }    
        }
        printf("\n");
    }
    return 0;
}
