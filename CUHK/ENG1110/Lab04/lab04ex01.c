/**
 * ENGG1110 Problem Solving by Programming
 *
 * I declare that the assignment here submitted is original
 * except for source material explicitly acknowledged,
 * and that the same or closely related material has not been
 * previously submitted for another course.
 * I also acknowledge that I am aware of University policy and
 * regulations on honesty in academic work, and of the disciplinary
 * guidelines and procedures applicable to breaches of such
 * policy and regulations, as contained in the website.
 *
 * University Guideline on Academic Honesty:
 *http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : Yung Sze Wai
 * Student ID   : 1155259203
 * Class/Section: A
 * Date         : 26092025
 */

#include <stdio.h>

int main(void) {
    char c;
    scanf("%c", &c);
    printf("You have entered '%c'.\n", c);
    if (c >= 'A' && c <= 'Z') {
        printf("'%c' is a capital letter.", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("'%c' is a small letter.", c);
    } else if (c >= '0' && c <= '9') {
        printf("'%c' is a number.", c);
    } else {
        printf("'%c' is not an alphanumeric letter.", c);
    }
}