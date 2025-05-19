#include <stdio.h>

int main()
{
    int rice = 10;
    int corn = 5;
    float wheat = 5.50;
    float pea = 2.50;
    float chickpeas = 4.50;
    char unit [] = "kg";
    float total_items_kg = rice+corn+wheat+pea+chickpeas; // Calculate total items
    float cost_per_kg = 9.99;
    float total_cost = (rice*cost_per_kg)+(corn*cost_per_kg)+(wheat*cost_per_kg)+
                       (pea*cost_per_kg)+(chickpeas*cost_per_kg);
    char cost_unit[] = "Taka";


    printf("Rice: %i %s\n", rice, unit);
    printf("Corn: %i %s\n", corn, unit);
    printf("Wheat: %.2f %s\n", wheat, unit);
    printf("Pea: %.2f %s\n", pea, unit);
    printf("Chickpeas: %.2f %s\n", chickpeas, unit);
    printf("Total iteam: %.2f %s\n", total_items_kg, unit);
    printf("Total costs: %.3f %s\n\n", total_cost, cost_unit);

    printf("Thank you very much for shopping with us!");

    return 0;
}