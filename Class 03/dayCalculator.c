#include <stdio.h>

int main(){
    int d,m,Y,c,y;
    printf("Enter your DOB:[dd/mm/yyyy]\n");
    scanf("%d/%d/%d",&d,&m,&Y);
    printf("Your DOB is:%d/%d/%d\n",d,m,Y);
    if(m!=1 && m!=2){
        m=m-2;
    }
    else{
        Y=Y-1;
        if(m==1){
            m=11;
        }
        else if(m==2){
            m=12;
        }
    }
    y=Y%100,c=Y/100;
    int w=d+(int)(2.6*m-0.2)-2*c+y+(c/4)+(y/4);
    // printf("%d",w);
    
    if(w>=0){
        w=w%7;
    }
    else{
        w=7+(w%7);
    }
    printf("%d",w);
    return 0;
}