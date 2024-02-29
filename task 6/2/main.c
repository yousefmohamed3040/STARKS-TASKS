#include <stdio.h>
typedef struct
{
    int hour;
    int min;
    int sec;

}start;
typedef struct
{
    int hour;
    int min;
    int sec;

}end;
start data;
end time;
int main(void)
{
    int diff_in_sec;
    int startsec;
    int endsec;
    printf("enter start time in hour and min and sec:");
    scanf("%d%d%d",&data.hour,&data.min,&data.sec);
    startsec=data.hour*3600+data.min*60+data.sec;
    printf("enter end time in hour and min and sec:");
    scanf("%d%d%d",&time.hour,&time.min,&time.sec);
    endsec=time.hour*3600+time.min*60+time.sec;
    diff_in_sec=endsec-startsec;
    printf("The time difference= %d hour and %d min and %d sec.",diff_in_sec/3600,(diff_in_sec%3600)/60,(diff_in_sec%3600)%60);
}
