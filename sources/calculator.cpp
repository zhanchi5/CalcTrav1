double summary(float a, float b)
{
        return a+b;
}

double sub (float a, float b)
{
        return a-b;
}

double  multiplication (float a, float b)
{
        return a*b;
}

double division (float a, float b)
{
        return a/b;
}

double involution(float a, float b)
{
        double result = a;
        for(int i = 1; i <b; i++)
        {
                result *=a;
        }

        return result;
}

long double square_root(float x) {
double powi = 1;
int i;
for(i=1;i<x;i++)
{
if (involutioin(powi,2) == x) break;
else (powi = 0.5*(powi + x/powi));
}
return powi;
}
