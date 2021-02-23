
int lcs(int m, int n, string X, string Y)
{
        int lcs[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                    if(i==0||j==0)
                    lcs[i][j]=0;
                    else
                    {
                        if(X[i-1]==Y[j-1])
                        lcs[i][j]=1+lcs[i-1][j-1];
                        else
                        lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                    }
                
                
            }
        }
        
        return lcs[m][n];
}
