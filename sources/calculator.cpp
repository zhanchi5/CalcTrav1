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
    double pow1=1; double b;
    int i=0;
    while(1) {
        b=pow1;
        pow1=0.5*(pow1+a/pow1); 
        if (pow1>=b) {
            i++; if (i>1);
            break;
        }
    }
    return(pow1);

}
