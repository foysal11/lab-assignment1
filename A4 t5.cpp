#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={0};

    int n;

    for(int i=0;i<15;++i){
        scanf("%d",&n);
        arr[n]++;
    }
    for(int i=0;i<10;++i){
        printf("%d occurs %d times\n",i,arr[i]);
    }

}
