#include <stdio.h>


void showEntries(void);

void addEntry(void);

void deleteEntry(void);

int main() {
    printf("What do you want to do? \n");
    printf("Enter 1 to show all Entries \n");
    printf("Enter 2 to add an Entry \n");
    printf("Enter 3 to delete an Entry \n");
    printf("Enter 0 to exit \n");
    printf("Enter your choice: \n");

    int input;
    scanf("%d",&input);

    switch (input) {
        case 1:
            showEntries();
            break;
        case 2:
            addEntry();
            break;
        case 3:
            deleteEntry();
            break;
        case 0:
            return 0;
    }
    return 0;
}

void showEntries(void) {

}

void addEntry(void) {

}

void deleteEntry(void) {

}
