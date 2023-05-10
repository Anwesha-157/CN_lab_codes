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
    for(int i=0;i<b;i++)
        s[len++]='0';
    s[len++]='\0';
    printf("The new dataword is:%s\n",s);
    len=len-b;
    strcpy(temp,s);
    for(i=0;i<len;i++){
        if(temp[i]=='1'){
            for(j=0;j<divl;j++){
                if(temp[i+j]==div[j]) 
                    temp[i+j]='0';
                else
                    temp[i+j]='1';
            }
        }
    }
    for(i=len;i<len+(divl-1);i++)
            s[i]=temp[i];
    printf("New dataword is  %s\n",s);
    }