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

long double square_root(float a) {
double pow1 = 1;
int i;
for(i=1;i<a;i++)
{
if (involution(pow1,2) == a) break;
else (pow1 = 0.5*(pow1 + a/pow1));
}
return pow1;
}
