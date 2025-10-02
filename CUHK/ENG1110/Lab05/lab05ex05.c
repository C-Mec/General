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
    int isPrime[] = {
        0,  // this is [0]
        0, 1, 1, 0, 1, 0, 1, 0, 0, 0,
        1, 0, 1, 0, 0, 0, 1, 0, 1, 0,
        0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
        1, 0, 0, 0, 0, 0, 1, 0, 0, 0,
        1, 0, 1, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
        1, 0, 0, 0, 0, 0, 1, 0, 0, 0,
        1, 0, 1, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 1, 0, 0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 0, 1, 0, 0, 0};
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    printf("[%d, %d]:", n, m);
    int cnt = 0;
    for (int i = n; i <= m; i++) {
        if (isPrime[i]) {
            printf(" %d", i);
            cnt++;
        }
    }
    printf(" (%d)", cnt);
}