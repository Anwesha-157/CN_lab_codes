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

    if((dl%sl)!=0){
        i=sl-(dl%sl);
        for(j=0;j<i;j++)
            data1[j]='0';
        strcat(data1,data);
        strcpy(data,data1);
        dl=dl+i;
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
    printf("Checksum=");
    for(i=0;i<sl;i++){
        if(sum[i]==0)
        sum[i]=1;
        else
        sum[i]=0;
    printf("%d",sum[i]);
    data[dl+i]=sum[i]+48;
    }
    data[dl+i]='\0';
    printf("Codeword is : %s",data);
    return 0;
   }

   