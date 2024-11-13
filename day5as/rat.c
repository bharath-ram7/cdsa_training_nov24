#include <stdio.h>
#include <ctype.h>

int main()
{
    char foodType = '\0';
    int choice = 0;
    puts("Welcome to Madurai Cafe");
    do
    {
        puts("V: Veg, N: Nonveg. Your choice please: ");
        scanf(" %c", &foodType); // Notice the space before %c to consume any extra newline
        foodType = tolower(foodType); // Convert to lowercase

        switch (foodType)
        {
        case 'v': // Veg menu
            puts("1: Banne-Dosa 2: Upma 3: Rava-idli \nYour choice? ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Your tasty dosa, Sir!");
                break;
            case 2:
                puts("Your yummy upma, Ma'am!");
                break;
            case 3:
                puts("Your delicious idli, Sir!");
                break;
            default:
                puts("We don't serve grass, Sir.");
            }
            break; // Add break to avoid fall-through to Nonveg

        case 'n': // Non-veg menu
            puts("1: Mutton-pulav 2: Chicken-chilly 3: Fish-fry. Your choice please? ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Your tasty Hanumantu!");
                break;
            case 2:
                puts("Guntur delicious chicken, Ma'am!");
                break;
            case 3:
                puts("Your spicy fish fry, Ma'am!");
                break;
            default:
                puts("We don't serve lizards, Ma'am.");
            }
            break; // Add break to ensure proper exit from the switch

        default:
            puts("Invalid choice. Please select either V for Veg or N for Non-veg.");
        }

        puts("Do you wish to have more? 1: Yes 2: No");
        scanf("%d", &choice);
    } while (choice == 1); // Keep looping if the user wants more

    puts("Thank you! Visit again.");
    return 0;
}