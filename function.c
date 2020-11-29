#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int** s(int* a,int len){

int t;
   int temp=0;
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(*(a+j)>*(a+j+1)){
                temp=*(a+j+1);
                *(a+j+1)=*(a+j);
                *(a+j)=temp;
            }
        }
    }


int **ans;
int n= (int)sqrt(len);
ans=(int **)malloc(n*sizeof(*ans));
ans[0]=(int *)malloc(n*n*sizeof(int));

for(int i=0;i<n;i++){
        ans[i]=&ans[0][i*n];
}
int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        *(ans+i*n+j)=*(a+count);
        count++;
    }
}

return ans;

}
