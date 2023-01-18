#include <stdio.h>

int main()
{
    int n, a[9999],count[9999];
    scanf("%d", &n);

    for(int i=0; i<n; i++ ){
        scanf("%d", &a[i]);
        }


    for(int i=0;i<n;i++){ //counting sort
        count[a[i]]++;
        }

    for(int i=0;i<=100;i++){

        while(count[i]!=0){

            printf("%d ", i);

            count[i]--;

        }

    }

return 0;

}
