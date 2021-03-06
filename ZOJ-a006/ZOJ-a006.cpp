#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

#define MAX 5

using namespace std;

int main(void) {
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        // Calculate the determine equation
        int det = b * b - 4 * a * c;

        if (det < 0)
            printf("No real root\n");
        else {
            // Calculate the first of root
            double root1 = (-b + sqrt(det)) / (2 * a);

            if (det == 0)
                printf("Two same roots x=%d\n", int(root1));
            else {
                // Calculate the seconf of root
                double root2 = (-b - sqrt(det)) / (2 * a);                
                printf("Two different roots x1=%d , x2=%d\n", int(root1), int(root2));
            }
        }
    }

    return 0;
}