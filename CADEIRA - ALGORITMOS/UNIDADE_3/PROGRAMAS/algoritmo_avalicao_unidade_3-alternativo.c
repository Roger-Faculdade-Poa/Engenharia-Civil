#include<stdio.h>
int main() {
float x[] = {1.73, 1.81, 1.85};
for(int i=0;i<3;i++)
{
    if (x[i]>1.80)
    {
        printf("%.2f pode entrar\n", x[i]);
    }
}
}
