#include<stdio.h>
int main(){
    char *months[]={"january", "february","march","april", "may","june", "july", "august", "september", "octobor", "november", "december"};
    int daysInMONTH[]={31,28,31,30,31,30,31,31,30,31,30,30};
int i,j,totalDays,weekDay=0;
for(i=0; i<=12; i++){
    printf("\n-----------------------%s---------------------\n", months[i]);
    printf("\n    sun   mon   tue   wed   thu   fri   sat\n\n");
    totalDays=daysInMONTH[i];

for(j=1; j<= totalDays; j++){
    printf("%6d",j);
    weekDay++;
    if(weekDay>6){
        weekDay=0;
        printf("\n");
    }

}
}

    return 0;
}