#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c) {
  /* declare a variable to store the largest number */
  int largest;

  /* check if a is the largest number */
  if (a > b && a > c) {
    /* assign a to largest */
    largest = a;
  }
  /* otherwise, check if c is the largest number */
  else if (a > b && c > a) {
    /* assign c to largest */
    largest = c;
  }
  /* otherwise, check if b is the largest number */
  else if (b > c) {
    /* assign b to largest */
    largest = b;
  }
  /* otherwise, assign c to largest */
  else {
    largest = c;
  }

  /* return the largest number */
  return largest;
}
