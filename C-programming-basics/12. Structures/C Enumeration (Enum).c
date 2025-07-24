#include <stdio.h>

// Use: To give names to constant values, making code easier to read and maintain

// enum Level {
//   LOW = 25,
//   MEDIUM = 50,
//   HIGH = 75 // The last item does not need a comma
// };
// enum Level { LOW = 25, MEDIUM = 50, HIGH = 75 };

// enum Level { LOW, MEDIUM, HIGH };

// int main() {
//     // By default, the first item has the value 0, the second = 1, and third = 2 (increments by 1)
//     enum Level value1 = LOW;
//     printf("%d\n", value1);

//     enum Level value2 = MEDIUM;
//     printf("%d\n", value2);

//     enum Level value3 = HIGH;
//     printf("%d\n", value3);

//     return 0;
// }

// If we assign a value to one specific item, the next items will update their numbers accordingly
enum Level { LOW = 1, MEDIUM, HIGH };

int main() {
  enum Level value = MEDIUM;

  switch (value) {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  }
  return 0;
}