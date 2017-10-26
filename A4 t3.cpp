#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[100],n,even[100];
    printf("Enter number: ");
    scanf("%d",&n);
    int j=0;
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even[j++]=arr[i];
        }
    }

    for(int i=j-1;i>=0;--i){
        printf("%d ",even[i]);
    }


}
