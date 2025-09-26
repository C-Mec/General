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
    int f[21] = {0, 1, 1, 2, 3,
                 5, 8, 13, 21, 34,
                 55, 89, 144, 233, 377,
                 610, 987, 1597, 2584, 4181,
                 6765};
    int x;
    scanf("%d", &x);
    printf("%d", f[x]);
    return 0;
}