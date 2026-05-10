#include <stdio.h>
#include <math.h>

int main(){
    // int n;
    // scanf("%d", &n);

    // int sum = 0;
    // for(int i=1; i<=n; i++){     // 1 + 2 + 3 + 4 + ...... + up to n
    //     sum += i;
    //     if(i == n){
    //         printf("%d = %d", i,sum);
    //         break;
    //     }
    //     printf("%d + ", i);
    // }


    // int sum = 0;
    // for(int i=1; i<=n; i++){     // 1² + 2² + 3² + 4² + ...... + up to n²
    //     sum += i*i;
    //     if(i == n){
    //         printf("%d = %d", i*i,sum);
    //         break;
    //     }
    //     printf("%d + ", i*i);
    // }


    // int sum = 0;
    // for(int i=1; i<=n; i++){     // 1² - 2² + 3² - 4² + ...... + up to n²
    //     if(i == n){
    //         printf("%d = ", i*i);
    //         if(n % 2 == 0){
    //             sum -= i*i;
    //         } else{
    //             sum += i*i;
    //         }
    //         break;
    //     }
    //     if(i % 2 != 0){
    //         sum += i*i;
    //         printf("%d - ", i*i);
    //     } else{
    //         sum -= i*i;
    //         printf("%d + ", i*i);
    //     }
    // }
    // printf("%d\n", sum);


    int n;
    scanf("%d", &n);
    int theta;
    scanf("%ld", &theta);

    double x = (3.1416/180) * theta;
    double value = 0.0;
    for(int i=1; i<=n; i++){
        double fact = 1;
        for(int j=1; j<=(2*i-1); j++){
            fact *= j;
        }
        double x = pow(x, 2*i-1);
        double s = pow(-1, i-1);
        value += (s*x) / fact;
    }

    printf("%ld\n", value);
    return 0;
}