#include<stdio.h>

int main(){
    int n;  // size of string 
    char c; 
    scanf("%c",&c); // input character to be searched
    scanf("%d",&n);
    char input[n];  // initializing character array
    scanf("%s",input);
    int first_idx = -1, last_idx = -1; 
    for(int i=0;i<n;i++){
        if(input[i]==c){
            first_idx = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(input[i]==c){
            last_idx = i;
            break;
        }
    }
    printf("First Index : %d\nLast Index : %d",first_idx,last_idx);
}