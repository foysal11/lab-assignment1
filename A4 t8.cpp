#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],even[10],odd[10];

    int n,e=0,o=0;

    for(int i=0;i<10;++i){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even[e++]=arr[i];
        }
        else {
            odd[o++]=arr[i];
        }

    }
    if(arr[0]%2==0){
        for(int i=0;i<e;++i){
            printf("%d ",even[i]);

        }
        for(int i=0;i<o;++i){
            printf("%d ",odd[i]);

        }
    }
    else {

        for(int i=0;i<o;++i){
            printf("%d ",odd[i]);

        }
        for(int i=0;i<e;++i){
            printf("%d ",even[i]);

        }
    }

}
