#include <stdio.h>

int main(){
    int u,v,t1,t2;
    scanf("%d %d %d %d", &u, &v,&t1, &t2);
    if (u<v)
        printf("%d", v*t1+(v+u)*t2);
    else 
        printf("napishite normalnie chisla");
    return 0;
    }