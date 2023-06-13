#include <stdio.h>

#define FUEL_EFFICIENCY 15
#define BATTERY_RANGE 30

int main() {
    int km_under_40, km_over_40, total_km = 0, total_fuel_cost = 0, num_battery_uses = 0;
    int fuel_price = 458; 

    while (1) {
        printf("Enter the KM driven under 40 KM/h speeds: ");
        scanf("%d", &km_under_40);

        printf("Enter the KM driven over 40 KM/h speed: ");
        scanf("%d", &km_over_40);

        total_km += km_under_40 + km_over_40;

        int fuel_used = km_over_40 / FUEL_EFFICIENCY;
        int battery_used = (km_under_40 + km_over_40 - fuel_used * FUEL_EFFICIENCY) / BATTERY_RANGE;
        if ((km_under_40 + km_over_40 - fuel_used * FUEL_EFFICIENCY) % BATTERY_RANGE > 0) {
            battery_used++;
        }

        total_fuel_cost += fuel_used * fuel_price;
        num_battery_uses += battery_used;

        printf("Total KM driven: %d\n", total_km);
        printf("Total fuel cost: %d\n", total_fuel_cost);
        printf("Number of times battery completely used: %d\n", num_battery_uses);
    }

    return 0;
}

