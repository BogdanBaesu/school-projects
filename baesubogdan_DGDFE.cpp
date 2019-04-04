#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("input.dat");

int n;
int G[100][100];
int S[100];
int VIZ[100];
int top;
int c=0;
int m=0;

void read_data()
{
    fin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            fin>>G[i][j];
}

int DGDFE(int node)
{
    cout<<node<<" ";
    VIZ[node]=1;
    int adiacent=1;
    while(adiacent<=n)
    { if(G[node][adiacent]==1 && VIZ[adiacent]==0)
    {
        DGDFE(adiacent);
    }
        adiacent++;
    }
    return 0;
}

int main()
{
    read_data();
    DGDFE(1);
}
