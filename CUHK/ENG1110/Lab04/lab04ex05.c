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
    int votes[10], c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &votes[i]);
        if (votes[i] == 1) {
            c1++;
        } else if (votes[i] == 2) {
            c2++;
        } else {
            c3++;
        }
    }
    if (c1 > c2 && c1 > c3) {
        printf("Congratulations! Candidate 1 is the next committee chairman.");
    } else if (c2 > c1 && c2 > c3) {
        printf("Congratulations! Candidate 2 is the next committee chairman.");
    } else if (c3 > c2 && c3 > c1) {
        printf("Congratulations! Candidate 3 is the next committee chairman.");
    } else {
        printf("We cannot decide our committee chairman in this vote.");
    }
}