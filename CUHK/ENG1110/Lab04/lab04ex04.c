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
    double v[3], w[3];
    printf("Enter vector v ([0] [1] [2]): ");
    for (int i = 0; i < 3; i++) {
        scanf("%lf", &v[i]);
    }
    printf("Enter vector w ([0] [1] [2]): ");
    for (int i = 0; i < 3; i++) {
        scanf("%lf", &w[i]);
    }
    double ans = v[0] * w[0] + v[1] * w[1] + v[2] * w[2];
    printf("Dot product v.w = %.2f", ans);
}