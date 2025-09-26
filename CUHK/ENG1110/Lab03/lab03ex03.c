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
    double adults, children;
    double cost, tips, per_person;
    printf("Input number of adults: ");
    scanf("%lf", &adults);
    printf("Input number of children: ");
    scanf("%lf", &children);
    printf("Input cost of meal: ");
    scanf("%lf", &cost);
    printf("Input tips: ");
    scanf("%lf", &tips);
    per_person = (cost + tips) / (adults + children * 0.5);
    printf("Each adult pays: %.2f\n", per_person);
    printf("Each child pays: %.2f\n", per_person / 2);
}