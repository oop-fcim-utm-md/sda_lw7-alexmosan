#include "header.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[], char *envp[])
{
    data_t array[100];
    data_t input [] = {
        {1, "Alpha"},
        {2, "Bravo"},
        {3, "Charlie"},
    };
    unsigned int length = 3;

    initialize(array, input, length);

    assert(array[1].id_ == 2);
    assert(!strcmp(array[1].name_, "Bravo"));

    print(array, length);

    insert_one(array, 1, data_t{4, "Delta"}, &length);

    printf("\n%s ", get_one(array, 1, length).name_);

    assert(array[1].id_ == 4);
    assert(!strcmp(array[1].name_, "Delta"));

    insert_one(array, 10, data_t{5, "Echo"}, &length);

    assert(array[4].id_ == 5);
    assert(!strcmp(array[4].name_, "Echo"));

    print(array, length);

    printf("\n%s\n", get_one(array, -1, length).name_);

    assert(get_one(array, -1, length).id_ == 5);
    assert(!strcmp(get_one(array, -1, length).name_, "Echo"));

    erase_one(array, 1, &length);

    assert(get_one(array, 1, length).id_ == 2);
    assert(!strcmp(get_one(array, 1, length).name_, "Bravo"));

    erase_one(array, 10, &length);

    assert(get_one(array, -1, length).id_ == 3);
    assert(!strcmp(get_one(array, -1, length).name_, "Charlie"));

    print(array, length);

    clear(array, &length);
}
