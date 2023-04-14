#include<stdio.h>
    
int arr[100][100] = {0};
int check[8] = {0};
int cnt=0;

void dfs(int p, int n){
    cnt ++;
    int i;
    check[p] = 1;
    for(i=1;i<=n;i++){
        if(arr[p][i] == 1 && check[i] == 0){
            dfs(i, n);
        }
    }
}

int main(){
    int n;
    int p;
    int x,y;
    scanf("%d\n", &n);
    scanf("%d\n", &p);
    for(int i=1; i<=p; i++){
        scanf("%d %d", &x, &y);
        arr[x][y]=1;        
        arr[y][x]=1;
    }
    dfs(1, n);
    printf("%d", cnt-1);
}



