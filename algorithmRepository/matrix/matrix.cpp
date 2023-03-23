#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int dy[]={1,0,-1,0},dx[]={0,1,0,-1};
    int a[110][110];
    memset(a,0,size(a));
    for(int i=0,j=0,d=0,k=1;k<=m*n;k++){
        a[i][j]=k;
        int x1=i+dx[d],y1=j+dy[d];
        if(x1<0||x1>=m||y1<0||y1>=n||a[x1][y1]){
            d=(d+1)%4;
            x1=i+dx[d],y1=j+dy[d];
        }
        i=x1;
        j=y1;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)    cout<<a[i][j]<<' ';
        cout<<endl;
    }
    //system("pause");
    return 0;
}