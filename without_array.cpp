#include <stdio.h>  

int  main() {
    int i, n, sum = 0;  
    float avg;  // if sum lai float ma garechai 10.0 le divide garna pardaina 10 le matra divide gare huncha 

    printf("Input the 10 numbers : \n");  

    for (i = 1; i <= 10; i++) { 
        scanf("%d", &n);  
        sum =sum+n;  
    }

    avg = sum / 10.0; // sum lai int ma rakhesi 10.0 le nai divide garna parcha

    printf("The sum of 10 no is : %d\nThe Average is : %f\n", sum, avg);  
    return 0;
}
