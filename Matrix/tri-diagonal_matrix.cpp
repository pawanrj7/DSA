#include<iostream>

using namespace std;

class Matrix
{
    private:
        int *A;
        int n;
    public:
        Matrix()
        {
            this->n=2;
            A = new int[2];
        }

        Matrix(int size)
        {
            this->n=size;
            A= new int[size*(size+1)/2];
        }
        ~Matrix()
        {
            delete []A;
        }
        void set(int i, int j, int x)
        {
            if(i<j)
            {

            }
            if(i==j)
            {

            }
            if(i>j)
            {

            }

        }
        int get(int i, int j)
        {
            if(i<j)
            {

            }
            if(i==j)
            {

            }
            if(i>j)
            {

            }
            else
            {
                return 0;
            }
            
        }
};

int main()
{
    int i,j,n,x;
    cout<<"Enter dimension of Matrix:";
    cin>>n;
    Matrix m(n);
    cout<<"Enter values of Matrix:";
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            cin>>x;
            m.set(i,j,x);

        }
    }
    return 0;
}