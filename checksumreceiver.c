#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char data[100],data1[100];
    int t,c,k,dl,sl,i,j=0,sum[100];
    printf("\n Enter the data:");
    scanf("%s",&data);
    dl=strlen(data);

    //the segment length must be power of 2

   while(1) {
    printf("Enter the segement length:");
    scanf("%d",&sl);
    for(i=1;i<=sl/2;i++){
        if(pow(2,i)==sl){
            j=1;
            break;
        }
    }
    if(j==1)
    break;
    else
    printf("the segment length is not the power of 2");
    }
     for(i=0;i<sl;i++)
    sum[i]=0;
    for(i=dl;i>0;i=i-sl){
        c=0;
        k=sl-1;
        for(j=i-1;j>=i-sl;j--){
            t=(sum[k]+(data[j]-48)+c);
            sum[k]=t%2;
            c=t/2;
            k--;    
            }
            if(c==1){
                for(j=sl-1;j>=0;j--){
                    t=sum[j]+c;
                    sum[j]=t%2;
                    c=t/2;
                }
            }
    }
    j=0;
    for(i=0;i<sl;i++){
        if(sum[i]!=1){
            j++;
            break;
        }
    }
    if(j==0){
        printf("data received ok:");
        printf("Actual data is:");
        for(i=0;i<dl-sl;i++)
            printf("%c",data[i]);
        }
    else{
        printf("data received wrong");
    }
    return 0;
    }