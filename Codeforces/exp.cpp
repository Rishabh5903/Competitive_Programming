#include <stdio.h>
#include <unistd.h> // For sleep()

int main() {
    int x;
    scanf("%d", &x); // Read user input
    while(1) { // Loop indefinitely
        
        int temp=x;
        while(temp >= 0) { // Start countdown from x to 0
            printf("\r%d ", temp); // \r returns to the start of the line
            fflush(stdout); // Flush stdout to ensure the output is displayed immediately
            temp--;
            sleep(1); // Wait for 1 second
        }
    }

    return 0;
}
