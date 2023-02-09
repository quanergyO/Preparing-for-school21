#include <stdio.h>

typedef struct
{
    int yy;
    char mm;
    char dd;
} Data;

typedef struct 
{
    int yy;
    char season;
    int day;
} Season;

Data getData(void);
void printData(Data data);
Season convToSeas(Data data);
void printSeas(Season s);
int is_leap_year(int year);
int day_in_mount(int year, int mount);
int count_day(int day, int mount, int season, int year);

int main(void)
{
    Data dat;
    Season seas;
    dat = getData();
    printData(dat);
    seas = convToSeas(dat);
    printSeas(seas);
    return 0;
}

void printSeas(Season s)
{
    printf("%04d-%02hhd-%02hhd\n", s.yy, s.season, s.day);
}

Season convToSeas(Data data)
{
    Season season;
    season.yy = data.yy;
    if (data.mm == 12 || data.mm == 1 || data.mm == 2)
    {
	season.season = 0;
	season.day = count_day(data.dd, data.mm, 0, data.yy);
    }
    else if (data.mm == 3 || data.mm == 4 || data.mm == 5)
    {
	season.season = 1;
	season.day = count_day(data.dd, data.mm, 1, data.yy);
    }
    else if (data.mm == 6 || data.mm == 7 || data.mm == 8)
    {
	season.season = 2;
	season.day = count_day(data.dd, data.mm, 2, data.yy);
    }
    else
    {
	season.season = 3;
	season.day = count_day(data.dd, data.mm, 3, data.yy);
    }
    return season;
}

int count_day(int day, int mount, int season, int year)
{
    switch (season)
    {
	case 0:
	    if (mount == 12) return day;
	    else if (mount == 1) return day + day_in_mount(year, 12);
	    else return day + day_in_mount(year, 12) + day_in_mount(year, 1);
	case 1:
	    if (mount == 3) return day;
	    else if (mount == 4) return day + day_in_mount(year, 3);
	    else return day + day_in_mount(year, 3) + day_in_mount(year, 4);
	case 2:
	    if (mount == 6) return day;
	    else if (mount == 7) return day + day_in_mount(year, 6);
	    else return day + day_in_mount(year, 6) + day_in_mount(year, 7);
	case 3:
	    if (mount == 9) return day;
	    else if (mount == 10) return day + day_in_mount(year, 9);
	    else return day + day_in_mount(year, 9) + day_in_mount(year, 10);
    }

}

int day_in_mount(int year, int mount)
{
    switch (mount)
    {
	case 1: return 31;
	case 2: 
		if (is_leap_year(year))
		    return 29;
		return 28;
	case 3: return 31;
	case 4: return 30;
	case 5: return 31;
	case 6: return 30;
	case 7: return 31;
	case 8: return 31;
	case 9: return 30;
	case 10: return 31;
	case 11: return 30;
	case 12: return 31;
    }

}

int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	return 1;
    return 0;
}

Data getData(void)
{
    Data data;
    scanf("%2d-%2hhd-%2hhd", &data.yy, &data.mm, &data.dd);
    return data;
}

void printData(Data data)
{
    printf("%04d-%02hhd-%02hhd\n", data.yy, data.mm, data.dd); 
}
