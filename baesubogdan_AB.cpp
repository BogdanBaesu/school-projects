#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("input.dat");

int n;

class node
{
    public :
    double my_info;
    class node *my_left;
    class node *my_right;
};

node *prim;

int read_data()
{
    fin>>n;
    fin>>prim->my_info;
}

node *new_nr;

node *make_some_tree(node *this_one,double new_one)
{
    new_nr->my_info=new_one;
    if(this_one->my_info<new_one)
    {
        if(this_one->my_right==NULL)
            this_one->my_right=new_nr;
        else
            return make_some_tree(this_one->my_right,new_one);
    }
    if(this_one->my_info>new_one)
    {
        if(this_one->my_left==NULL)
            this_one->my_left=new_nr;
        else
            return make_some_tree(this_one->my_left,new_one);
    }
}

int RSD(node *this_one)
{
    if (this_one!=NULL)
    {
        cout<<this_one->my_info<<" ";
        RSD(this_one->my_left);
        RSD(this_one->my_right);
    }
}

int SRD(node *this_one)
{
    if (this_one!=NULL)
    {
        SRD(this_one.my_left);
        cout<<this_one.my_info<<" ";
        SRD(this_one.my_right);
    }
}

int SDR(node *this_one)
{
    if (this_one!=NULL)
    {
        SDR(this_one.my_left);
        SDR(this_one.my_right);
        cout<<this_one.my_info<<" ";
    }
}

int main()
{
    read_data();
    double nr;
    for(int i=2;i<=n;i++)
    {
        fin>>nr;
        make_some_tree(prim, nr);
    }
    RSD(prim);
    cout<<endl;
    SRD(&prim);
    cout<<endl;
    SDR(&prim);
}
