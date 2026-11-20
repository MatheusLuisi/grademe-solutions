#define FALSE 0
#define TRUE 1

int is_leap_year(int year)
{
	if (year % 400 == 0)
		return (TRUE);
	else if (year % 100 == 0)
		return (FALSE);
	else if (year % 4 == 0)
		return (TRUE);
	else 
		return (FALSE);
}

int month_chck(int month)
{
	if (month >= 1 && month <= 7){
		if (month % 2 == 0)
			return 30;
		return 31; 
	}
	else if (month % 2 == 0)
		return 31;
	return 30;
}

int	days_in_month(int year, int month)
{
	if(month > 12 || month < 1)
		return (-1);
	if(month == 2){
		if(is_leap_year(year) == TRUE)
			return (29);
		return (28);
	}
	return (month_chck(month));
}
