#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[100],n;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }

    for(int i=n-1;i>=0;--i){
        printf("%d ",arr[i]);
    }


}
