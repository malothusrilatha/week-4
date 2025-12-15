 #include <stdio.h>
int main() {
    int n, i = 1;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        fact = fact * i;
        i++;
    } while(i <= n);
    printf("Factorial of %d = %lld", n, fact);
    return 0;
}





















