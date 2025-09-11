#include <stdio.h>
#include <ctype.h>

int main(){

    float average, averageo;
    int even = 0;
    int odd = 0;
    int avg_e=0;
    int avg_o=0;
    int n = 0;
    while(n!= 0){
        scanf("%d",&n);
        if(n %2 ==0){
            even++;
            avg_e = avg_e + n;
        }
        else if (n %2 !=0){
            odd++;
            avg_o = avg_o +n;        }
    }
    average = avg_e/even;
    averageo = avg_o/ odd;
    printf("%d \n",even);
    printf("%d \n",odd);
    printf("%f \n",average);
    printf("%f \n",averageo);

    return 0;
}
