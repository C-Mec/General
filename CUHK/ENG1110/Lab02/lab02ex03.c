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
 * Date         : 20250911
 */

#include <stdio.h>

int main(void) {
    long ThreeDigitNum;
    printf("Input a 3 digit number: ");
    scanf("%d", &ThreeDigitNum);
    printf("MSD: %d\n", ThreeDigitNum / 100);
    printf("LSD: %d\n", ThreeDigitNum - ThreeDigitNum / 10 * 10);
    return 0;
}