#include<stdio.h>
int main()
{

  int arr[10];

  int i=0,var,flag=0,j=0;

  while(j<10){


    scanf("%d",&var);
    flag=0;
    if(j==0){
        arr[j++]=var;
        continue;
    }
    for(i=0;i<j;++i){
        if(arr[i]==var){
            printf("Enter a different number\n");
            flag=1;
            break;
        }
    }
    if(flag==0){
        arr[j++]=var;
    }


  }

  for(i=0;i<10;++i){
    printf("%d ",arr[i]);
  }
}
