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
    double wspeed;
    scanf("%lf", &wspeed);
    if (wspeed < 41.5)
        printf("Continuous Wind Speed of %.1f => Tropical Cyclone Warning Signal No 1", wspeed);
    else if (wspeed < 62.5)
        printf("Continuous Wind Speed of %.1f => Tropical Cyclone Warning Signal No 3", wspeed);
    else if (wspeed < 117.5)
        printf("Continuous Wind Speed of %.1f => Tropical Cyclone Warning Signal No 8", wspeed);
    else
        printf("Continuous Wind Speed of %.1f => Tropical Cyclone Warning Signal No 10", wspeed);
}