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
 * Date         : 260925
 */

#include <stdio.h>

int main(void) {
    double a, b, c, D;
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);
    D = b * b - (4 * a * c);
    printf("discriminant is %.3f\n", D);
    printf("The quadratic equation has ");
    if (D > 0)
        printf("two real roots");
    else if (D == 0)
        printf("one double real root");
    else {
        printf("no real roots");
    }
    printf(".\n");
    return 0;
}