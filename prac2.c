#include<stdio.h>

int main()
{
    union
    {
        struct
        {
            char c[2];
            char ch[2];
        }s;
        struct
        {
            short int i;
            short int j;
        }st;
    }U={1,0,1,0}; //conclusion is union values goes from lsb to msb
    printf("%d %d \n", U.st.i, U.st.j);
}
