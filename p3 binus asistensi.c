#include <stdio.h>



int main()

{
int m;
int arr[999];
 scanf("%d", &m);
 for (i=0)

int n = sizeof(arr)/sizeof(int);

int count[11];



for(int i=0;i<=10;i++){ //inisialisasinilaiawal count

count[i]=0;

}



for(int i=0;i<n;i++){ //counting sort

count[arr[i]]++;

}



for(int i=0;i<=10;i++){

while(count[i]!=0){

printf("%d", i);

count[i]--;

}

}



return 0;

}
