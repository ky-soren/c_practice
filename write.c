#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE * fpointer = fopen("employees.txt", "a");
    
   // fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
   //append to file instead of overwriting
    fprintf(fpointer, "\nAmy, Customer Service");
    fclose(fpointer);

    return 0;
}