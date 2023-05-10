#include<stdio.h>
#include<string.h>
int main(){
    char str[100],s1[10]={'0'},s2[10]={'1'},ch;
    int c=0,count=0;
    printf("Enter the string:");
    gets(str);

    while(str[c]!='\0'){
        if(str[c]=='1'){
            count++;
        }
        c++;
    }
    printf("The no. of 1s is %d",count);
    printf("\nEnter the mode of parity:'e' for even and 'o' for odd");
    scanf("%c",&ch);
    switch(ch){
        case 'e':
        if(count%2 == 0){
            strcat(str,s1);
        }
        else{
            strcat(str,s2);
        }
        printf("Updated string is %s",str);
        break;
        case 'o': 
        if(count%2 == 0){
            strcat(str,s2);
        }
        else{
            strcat(str,s1);
        }
        printf("Updated string is %s",str);
        break;
    }
        return 0;
}