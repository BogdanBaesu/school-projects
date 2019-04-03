#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("input.dat");

int n;
int arc[100][100];
int drum[100][100];

int read_data()
{
    fin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>>arc[i][j];
}

int conversie()
{
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    for(int k=1;k<=n;k++)
    if(k!=i && k!=j && i!=j)
                    {
                        if(arc[i][k]!=0 && arc[k][j]!=0)
                        {
                        if(arc[i][k]<=arc[k][j])
                        arc[i][j]=arc[i][k];
                        if(arc[i][k]>arc[k][j])
                        arc[i][j]=arc[k][j];
                        }
                    }
}

int main()
{
    read_data();
    conversie();
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        cout<<arc[i][j]<<" ";
        cout<<endl;
    }
}
