#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[100],n,a,j=0;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);

    }
    scanf("%d",&a);

    for(int i=0;i<n;++i){
        if(a==arr[i]){
                j=1;
            break;

        }
    }
    if(j==0){
        printf("No");
    }
    else {
        printf("yes");
    }



}
