#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year) {
  /* check if the year is a leap year */
  int is_leap_year = (year % 100 == 0 && year % 400 == 0) || (year % 4 == 0);

  /* check if the date is valid */
  if (month < 1 || month > 12) {
    printf("Invalid month: %d\n", month);
    return;
  }

  if (day < 1 || day > 31) {
    printf("Invalid day: %d\n", day);
    return;
  }

  /* calculate the day of the year */
  int day_of_year = day;
  if (month > 2 && is_leap_year) {
    day_of_year++;
  }

  /* calculate the remaining days in the year */
  int remaining_days = 366 - day_of_year;
  if (!is_leap_year) {
    remaining_days = 365 - day_of_year;
  }

  /* print the results */
  printf("Day of the year: %d\n", day_of_year);
  printf("Remaining days: %d\n", remaining_days);
}
