#include <stdio.h>
#include <math.h>
int main()
{
    double ans = 0.0;
    int flag = 1; // Alternating sign (-1)^n
    double term;  // Current term value
    int x = 0;    // Term index
    //int a = (1 + x * 2);
    do {
        term = 4.0 / (1 + x * 2) * flag; // Calculate the term
        ans += term; // Add the term to the result
        flag *= -1;  // Flip the sign
        x++;         // Increment the index
        
        //printf("Iteration %d: ans = %.6f\n", x, ans);
    } while (fabs(ans - 3.14159) >= 1e-7); // Check for convergence within a tolerance
    int a = (1 + x * 2);
    //printf("Final value of π (approximated): %.6f\n", ans);
    printf("%d",a);
    return 0;
}
