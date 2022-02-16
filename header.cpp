#include "header.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

void initialize(data_t* a, const data_t* b, const unsigned int length)
{
    for (size_t i = 0; i < length; i++)
    {
        a[i] = b[i];
    }
}
void insert_one(data_t* array, const unsigned int id, const data_t elem, unsigned int* length)
{
    if (id >= *length)
    {
        array[*length] = elem;
        *length += 1;
    }    
    else 
    {        
            *length += 1;
            for (size_t j = *length; j > id; j--)
            {
                array[j] = array[j - 1];
            }
            array[id] = elem;
    }
   
}
void erase_one(data_t* array, const unsigned int id, unsigned int* length)
{
    if (id >= *length)
    {
        *length -= 1;
        array[*length] = array[99];

    }
    else {

        for (size_t i = id; i < *length; i++)
        {
           array[i] = array[i + 1];
        }
        *length -= 1;
    }
}
void print(const data_t* array, const unsigned int length) {
    for (size_t i = 0; i < length; i++)
    {
        std::cout << array[i].id_ << " " << array[i].name_ << " ";
    }
}
void clear(data_t* array, unsigned int* length) 
{
    for (size_t i = 0; i < *length; i++)
    {
        array[i] = array[99];
    }
    *length = 0;

}
data_t get_one(const data_t* array, const int id, const int length)
{
    if (id >= 0) 
    {
        if (id>length)
            return array[length];
        
        else
            return array[id];
    }
    else 
    {
        if (abs(id) > length)
            return array[0];
        
        else 
            return array[length+id];
    }
}