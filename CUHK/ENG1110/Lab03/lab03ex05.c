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
 *   http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : Yung Sze Wai
 * Student ID   : 1155259203
 * Class/Section: ENGG1110A
 * Date         : 180925
 */

#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    if (x == 0)
        printf("Zero");
    else if (x > 0) {
        if (x % 2 == 0)
            printf("Positive even number");
        else
            printf("Positive odd number");
    } else {
        if (x % 2 == 0)
            printf("Negative even number");
        else
            printf("Negative odd number");
    }
}