#include<iostream>
using namespace std;
void chain(int *p,int n,int m[][7],int s[][7])//p维数数组，m最优乘次数组，s记录划分方案
{
    int j;
    for(int i=1;i<=n;i++)
        m[i][i]=0;
    for(int r=2;r<=n;r++)
    {
        for(int i=1;i<=n-r+1;i++)
        {
            j=i+r-1;
            m[i][j]=m[i+1][j]+p[i-1]*p[i]*p[j];
            s[i][j]=i;
            for(int k=i+1;k<j;k++)
            {
                int t=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(t<m[i][j])
                {
                    m[i][j]=t;
                    s[i][j]=k;
                }
            }
        }
    }
    for(int i=1;i<=n;i++)    //我把它翻过来输出。。。
    {
        for(j=n;j>=i;j--)
        {
                cout<<m[i][j]<<' ';
        }
        cout<<endl;
    }

}

void Traceback(int i,int j,int s[][7])    //输出相乘方案
{
    if(i==j)
        return;
    Traceback(i,s[i][j],s);
    Traceback(s[i][j]+1,j,s);
    cout<<"Multiply A "<<i<<","<<s[i][j];
    cout<<" and B "<<(s[i][j]+1)<<","<<j<<endl;
    return;
}
int main()
{
    int p[7],m[7][7],s[7][7],n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<=n;i++)
        {
            scanf("%d",&p[i]);
        }
        chain(p,n,m,s);
        Traceback(1,6,s);
    }
    return 0;
}
/* 
p52 
测试数据：
6
30 35 15 5 10 20 25
*/
