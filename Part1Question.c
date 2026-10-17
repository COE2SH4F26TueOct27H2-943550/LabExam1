/* Question: Smallest divisor above one
 * Return the smallest divisor of n that is greater than 1. For a prime, return n itself. Domain: 2 <= n <= 1000000.
 * Complete only solve; write the answer to global result.
 * Use 10-20 nonblank code lines, excluding brace-only lines.
 */
#include <stdio.h>

long result;

void solve(long n)
{
    /* TODO: implement solve here. */
}

int main(void)
{
    int passed;
    passed = 0;
    result = -999999L;
    solve(2L);
    if (result == 2L) {
        passed = passed + 1;
        printf("Test 1: PASS\n");
    } else {
        printf("Test 1: FAIL (expected %ld, got %ld)\n", 2L, result);
    }
    result = -999999L;
    solve(49L);
    if (result == 7L) {
        passed = passed + 1;
        printf("Test 2: PASS\n");
    } else {
        printf("Test 2: FAIL (expected %ld, got %ld)\n", 7L, result);
    }
    result = -999999L;
    solve(91L);
    if (result == 7L) {
        passed = passed + 1;
        printf("Test 3: PASS\n");
    } else {
        printf("Test 3: FAIL (expected %ld, got %ld)\n", 7L, result);
    }
    result = -999999L;
    solve(97L);
    if (result == 97L) {
        passed = passed + 1;
        printf("Test 4: PASS\n");
    } else {
        printf("Test 4: FAIL (expected %ld, got %ld)\n", 97L, result);
    }
    result = -999999L;
    solve(100L);
    if (result == 2L) {
        passed = passed + 1;
        printf("Test 5: PASS\n");
    } else {
        printf("Test 5: FAIL (expected %ld, got %ld)\n", 2L, result);
    }
    printf("Passed %d of 5 test cases (%d%%)\n", passed, passed * 20);
    return passed == 5 ? 0 : 1;
}
