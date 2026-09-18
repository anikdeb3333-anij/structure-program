#include<stdio.h>
    int main (){
        int sum=0;
        for (int i =1; i<=10; i= i+2){
            sum +=i;
        }
        printf("%d", sum);
        return 0;
    }