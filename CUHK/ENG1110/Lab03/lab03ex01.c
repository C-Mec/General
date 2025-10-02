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
    int hr, min, sec;
    scanf("%d", &sec);
    hr = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;
    printf("%d Hours %d Minutes %d Seconds", hr, min, sec);
}