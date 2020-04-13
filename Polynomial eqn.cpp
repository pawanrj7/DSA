#include <iostream>
using namespace std;
#define MAX 10

struct term
{
    int coeff, exp;
};

struct poly
{
    struct term t[10];
    int n; //n is no of terms
};

void initpoly(struct poly *p)
{

    int i;
    p->n = 0;
    for (i = 0; i < MAX; i++)
    {
        p->t[i].coeff = 0;
        p->t[i].exp = 0;
    }
}
void polyappend(struct poly *p, int c, int e)
{
    p->t[p->n].coeff = c;
    p->t[p->n].exp = e;
    (p->n++);
}
void display(struct poly p)
{

    for (int i = 0; i < p.n; i++)
    {
        if (p.t[i].exp != 0)
        {
            cout << p.t[i].coeff << "x^" << p.t[i].exp << "+";
        }
        else
        {
            cout << p.t[i].coeff;
        }
    }
    cout << endl;
}

struct poly add(struct poly p1, struct poly p2)
{
    int i, j, c;
    struct poly p3;
    initpoly(&p3);
    if (p1.n > p2.n)
    {
        c = p1.n;
    }
    else
    {
        c = p2.n;
    }
    for (i = 0, j = 0; i <= c; p3.n++)
    {

        if (p1.t[i].coeff == 0 && p2.t[i].coeff == 0)
        {
            break;
        }

        if (p1.t[i].exp >= p2.t[i].exp)
        {

            if (p1.t[i].exp == p2.t[i].exp)
            {
                p3.t[p3.n].coeff = p1.t[i].coeff + p2.t[i].coeff;
                p3.t[p3.n].exp = p1.t[i].exp;
                i++;
                j++;
            }
            else
            {
                p3.t[p3.n].coeff = p1.t[i].coeff;
                p3.t[p3.n].exp = p1.t[i].exp;
                i++;
            }
        }
        else
        {
            p3.t[p3.n].coeff = p2.t[j].coeff;
            p3.t[p3.n].exp = p2.t[j].exp;
            j++;
        }
    }

    return p3;
}

int main()
{
    int n, c, e, z;
    struct poly p1, p2, p3;
    cout << "Enter size of first poly:\n";
    cin >> z;

    initpoly(&p1);
    for (int i = 0; i < z; i++)
    {

        cin >> c >> e;
        polyappend(&p1, c, e);
    }
    cout << "Enter size of Second  poly:\n";
    cin >> z;

    initpoly(&p2);
    for (int i = 0; i < z; i++)
    {

        cin >> c >> e;
        polyappend(&p2, c, e);
    }
    display(p1);
    display(p2);
    p3 = add(p1,p2);
    cout<<"Third polynomial is:\n";
    display(p3);

    return 0;
}