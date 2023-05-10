#include<stdio.h>
#include<string.h>
int main(){
    char s[100],div[100],temp[100];
    int b,i,j;
    printf("Enter the string:");
    scanf("%s",s);
    printf("Enter the divisor:");
    scanf("%s",div);
    int divl=strlen(div);
    b=strlen(div)-1;
    int len=strlen(s);
    strcpy(temp,s);
    for(i=0;i<len-b;i++){
        if(s[i]=='1'){
            for(j=0;j<divl;j++){
                if(s[i+j]==div[j]) 
                    s[i+j]='0';
                else
                    s[i+j]='1';
            }
        }
    }
    j=0;
    for(i=len-b;i<len;i++)
          j=j+s[i]-48;
    if(j==0){
        printf("original data received:");
        printf("Actual data\n");
        for(i=0;i<len-b;i++)
             printf("%c",temp[i]);
    }
    else
    printf("Data received wrong\n");
}