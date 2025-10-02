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
 * Class/Section: ENGG1110A
 * Date         : 021025
 */

#include <stdio.h>

int main(void) {
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    double v[10], w[10];
    printf("Enter vector v: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }
    printf("Enter vector w: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &w[i]);
    }
    double ans = 0;
    for (int i = 0; i < n; i++) {
        ans += v[i] * w[i];
    }
    printf("Dot product v.w = %.2f", ans);
}