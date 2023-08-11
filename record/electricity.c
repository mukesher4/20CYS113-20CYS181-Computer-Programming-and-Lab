#include <stdio.h>
int main() {
 int units;
 double total_bill = 0;
 printf("Enter the number of units consumed: ");
 scanf("%d", &units);
 if (units <= 100) {
 // First 100 units are free
 total_bill = 0;
 } else if (units <= 400) {
 // Next 300 units at 2.25 per unit
 total_bill = 100 * 0 + (units - 100) * 2.25;
 } else if (units <= 500) {
 // Next 100 units at 4.50 per unit
 total_bill = 100 * 0 + 300 * 2.25 + (units - 400) * 4.50;
 } else if (units <= 600) {
 // Next 100 units at 6.00 per unit
 total_bill = 100 * 0 + 300 * 2.25 + 100 * 4.50 + (units - 500) * 6.00;
 } else {
 // Beyond 600 units at 8.00 per unit
 total_bill = 100 * 0 + 300 * 2.25 + 100 * 4.50 + 100 * 6.00 + (units - 600) * 8.00;
 }
 printf("Electricity Bill: %.2f Rupees\n", total_bill);
 return 0;
}