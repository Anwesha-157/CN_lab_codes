#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char data[100];
    int data1[100],data2[100];
    int dl,i=0,j=0,k=0,z,c,r,l;
    printf("Enter the dataword:");
    scanf("%s",&data);
    dl=strlen(data);

    while(1){
        if(pow(2,i)>=dl+1)
          break;
          i++;
    }
    r=i;
    j=dl-1;
    for(i=1;i<=dl;i++){
      data1[i]=data[j]-48;
      j--;
    }
    l=1;
    int count=0;
    for(i=0;i<r;i++){
      z=pow(2,i);
      c=0;

      for(j=z;j<=dl;j=z+k){
         for(k=j;k<z+j;k++){
          if(k<=dl)
              c=c+data1[k];
         }
      }
      data2[l]=c%2;
      count=count+data2[l];
      l++;
    }
    
    if(count==0){
      printf("Actual data is received");
    }
    else{
      printf("Wrong data received");
      j=0;
      for(i=r;i>=1;i--){
        if(data2[i]==1)
        j=j+pow(2,(i-1));
      }
      printf("Error at position %d",j);
      if(data1[j]==0)
           data1[j]=1;
      else
           data1[j]=0;
      printf("Corrected codeword is:");
      for(i=dl;i>=1;i--)
            printf("%d",data1[i]);
        printf("\n");
    }
    return 0;
    }