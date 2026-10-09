#include <stdio.h>
int getBigger(int a, int b){ 
    if(a > b){
        return a;
    }
        else return b;   
}
int main(){
    int ia;
    int ib;
    printf("First number: ");
        scanf("%d", &ia);
    printf("Second number: ");
        scanf("%d", &ib);
int bigger = getBigger(ia,ib);
printf("%d is bigger",bigger);    
    return 0;
}