#include<iostream>
using namespace std;

class Matrix
{
    private:
        int n;
        int *A;
    public:
        Matrix()
        {
            this->n=2;
            A = new int[2];
        }

        Matrix(int size)
        {
            this->n=size;
            A= new int[2*size-1];
        }
        ~Matrix()
        {
            delete []A;
        }
        void set(int i, int j, int x)
        {
            if(i<=j){
                A[j-i]=x;
            }
            else
            {
                A[n+i-j-1]=x;
            }
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(i<=j)
                    {
                        cout<<A[j-i]<<" ";
                    }
                    else
                    {
                        cout<<A[n+i-j-1]<<" ";
                    }
                }
                cout<<endl;
            }
        }

};

int main()
{
    int i,j,n,x;
    cout<<"Enter the dimension of Toeplitz matrix:";
    cin>>n;
    Matrix m(n);
    cout<<"Enter the values of matrix:";
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            cin>>x;
            m.set(i,j,x);
            
        }
    }
    m.display();
    return 0;
}
