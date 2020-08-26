#include<stdio.h>
#include<math.h>

#define M_PI acos(-1.0)

float Taxicab_geometry(int);
float Euclidean_geometry(int);


int main()
{
	int r;
	float data[2];
	float *n = data;
    printf("INPUT R: ");
    if (scanf_s("%d", &r) != 1) {
        printf("ERROR\n");
        return 1;
    }
    else if (r < 0 || r > 10000) {
        printf("ERROR | 0 <= r <= 10000\n");
        return 1;
    }
    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            data[i] = Euclidean_geometry(r);
        }
        else if (i == 1)
        {
            data[i] = Taxicab_geometry(r);
        }
        printf("%.6f\n", *n);
        n++;
    }
	return 0;
}

float Taxicab_geometry(int r)
{
    float result;
    result = ((2 * r) * (2 * r)) / 2;
    return result;
}

float Euclidean_geometry(int r)
{
    float result;
    result = M_PI * r * r;
    return result;
}