#include<stdio.h>
 
int main()
{
  int n , i =3 ,  count, c;

    printf("Enter the number: ");
    scanf("%i", &n);

    if (n >=1){

        printf("2\n");

    }
    for (count =2 ; count <= n){
        for (c =2 ; c<= i-1 ; c++ ){
            if (i%c == 0);
            break
        }
        if (c == 1){
            printf("%d\n", &i);
            count++
        }
        i++
    }
    return 0;
  
}