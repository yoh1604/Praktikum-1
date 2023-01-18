#include <stdio.h>

int selisih(int n, int arr[], int j)
{
    if (n==0)
        return;
    else {
        for(int i = 0; i < n; i++){
            arr[i]=arr[i+1]-arr[i];
            if (arr[i]<0) arr[i]*= -1;}

        /*for (int j = i ; j < n; j++){
            //if( j = 0){
                printf("%d ", arr[j]);
            //} else {
                //for(arr[j] = 0; arr[j] < j; arr[j+1] - arr[j]);
            //}
        }*/
        for (int i=0;i<j;i++)
        {
            printf(" ");
        }
        for (int i=0;i < n-1;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        n--;
        j++;
        selisih(arr,n,j);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    selisih(n, arr, 1);

    return 0;
}


