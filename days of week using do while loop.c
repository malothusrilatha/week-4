 #include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        sum = sum + i;
        i++;
    } while(i <= n);
    printf("Sum of 1 to %d = %d", n, sum);
    return 0;
}




















