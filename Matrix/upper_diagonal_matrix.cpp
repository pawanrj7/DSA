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
            if(j>=i)
            {
                A[(j*(j-1)/2)+i-1]=x;
            }

        }
        int get (int i, int j)
        {
            if(j>=i)
            {
                return A[(j*(j-1)/2)+i-1];
            }
            else
            {
                return 0;
            }
            

        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(j>=i)
                        cout<<A[(j*(j-1)/2)+i-1]<<" ";
                    else
                        cout<<0<<" ";
                }
                cout<<endl;
            }

        }
};

int main()
{
    int i,j,n,x;
    cout<<"Enter the dimension of martrix:";
    cin>>n;
    Matrix m(n);
    cout<<"Enter values of upper triangular matrix:";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>x;
            m.set(i,j,x);

        }
    }
    m.display();
    return 0;
}
