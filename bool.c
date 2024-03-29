#include <stdbool.h>
#include <stdio.h>

#define NEW_BOOL    0b00000000

#define assginTRUE(my_bool, flag)  my_bool |= flag
#define assginFALSE(my_bool, flag) my_bool ^= flag
#define getValue(my_bool, flag)    my_bool & flag

#define FLAG_BOOL(num)  1 << num
#define GET_TEXT_BOOL(num) num != 0 : "TRUE" ? "FALSE"

int main(){

    bool my_array[16] = {
        true,false,true,true,
        true,true,false,true,
        true,false,true,true,
        true,true,false,true,
    };

    char my_bool = NEW_BOOL;

    assginTRUE(my_bool,  FLAG_BOOL(1));
    assginFALSE(my_bool, FLAG_BOOL(2));
    assginTRUE(my_bool,  FLAG_BOOL(7));
    assginTRUE(my_bool,  FLAG_BOOL(4));
    assginTRUE(my_bool,  FLAG_BOOL(5));

    printf("my_bool[0]: %lu\n", getValue(my_bool, FLAG_BOOL(0)));
    printf("my_bool[1]: %lu\n", getValue(my_bool, FLAG_BOOL(1)));
    printf("my_bool[2]: %lu\n", getValue(my_bool, FLAG_BOOL(2)));
    printf("my_bool[3]: %lu\n", getValue(my_bool, FLAG_BOOL(3)));
    printf("my_bool[4]: %lu\n", getValue(my_bool, FLAG_BOOL(4)));
    printf("my_bool[5]: %lu\n", getValue(my_bool, FLAG_BOOL(5)));
    printf("my_bool[6]: %lu\n", getValue(my_bool, FLAG_BOOL(6)));
    printf("my_bool[7]: %lu\n", getValue(my_bool, FLAG_BOOL(7)));

    char my_bool_vector[2] = {NEW_BOOL, NEW_BOOL};

    assginTRUE(my_bool_vector[0], FLAG_BOOL(1));

    printf("my_bool_vector[0][0]: %lu\n", getValue(my_bool_vector[0], FLAG_BOOL(0)));
    printf("my_bool_vector[0][1]: %lu\n", getValue(my_bool_vector[0], FLAG_BOOL(1)));
    printf("my_bool_vector[0][2]: %lu\n", getValue(my_bool_vector[0], FLAG_BOOL(2)));
    printf("my_bool_vector[0][3]: %lu\n", getValue(my_bool_vector[0], FLAG_BOOL(3)));
    printf("my_bool_vector[0][4]: %lu\n", getValue(my_bool_vector[0], FLAG_BOOL(4)));
    printf("my_bool_vector[0][5]: %lu\n", getValue(my_bool_vector[0], FLAG_BOOL(5)));
    printf("my_bool_vector[0][6]: %lu\n", getValue(my_bool_vector[0], FLAG_BOOL(6)));
    printf("my_bool_vector[0][7]: %lu\n", getValue(my_bool_vector[0], FLAG_BOOL(7)));

    assginTRUE(my_bool_vector[1], FLAG_BOOL(1));
    assginTRUE(my_bool_vector[1], FLAG_BOOL(4));

    printf("my_bool_vector[1][0]: %lu\n", getValue(my_bool_vector[1], FLAG_BOOL(0)));
    printf("my_bool_vector[1][1]: %lu\n", getValue(my_bool_vector[1], FLAG_BOOL(1)));
    printf("my_bool_vector[1][2]: %lu\n", getValue(my_bool_vector[1], FLAG_BOOL(2)));
    printf("my_bool_vector[1][3]: %lu\n", getValue(my_bool_vector[1], FLAG_BOOL(3)));
    printf("my_bool_vector[1][4]: %lu\n", getValue(my_bool_vector[1], FLAG_BOOL(4)));
    printf("my_bool_vector[1][5]: %lu\n", getValue(my_bool_vector[1], FLAG_BOOL(5)));
    printf("my_bool_vector[1][6]: %lu\n", getValue(my_bool_vector[1], FLAG_BOOL(6)));
    printf("my_bool_vector[1][7]: %lu\n", getValue(my_bool_vector[1], FLAG_BOOL(7)));


    return 0;    
}