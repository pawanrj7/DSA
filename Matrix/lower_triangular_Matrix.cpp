#include <iostream>


using namespace std;

class diagonalM
{
    private:
        int n;
        int *A;
    public:
        diagonalM()
        {
            this->n= 2;
            A =new int[2];
        }
        ~diagonalM()
        {
            delete []A;
        }
        diagonalM(int n)
        {
            this->n=n;
            A= new int[n*(n+1)/2];
        }
        void set(int i, int j, int x)
        {
            if(i>=j)
            {
                A[((i*(i-1))/2)+j-1]=x;
            }
        }

        int get(int i, int j)
        {
            if(i>=j)
            {
                return A[((i*(i-1))/2)+j-1];
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
                    if(i>=j)
                    {
                        cout<<A[((i*(i-1))/2)+j-1]<<" ";
                    }
                    else
                    {
                        cout<<0<<" ";
                    }


                }
                cout<<endl;
            }
            
        }

};

int main()
{
    int n,i,j,x;
    cout<<"Enter the size of array:";
    cin>>n;
    diagonalM dm(n);
    cout<<"Enter  values for Diagonal matrix:";
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>x;
            dm.set(i,j,x);
        }
    }
    dm.display();
}