#ifndef _HEADER_H_
#define _HEADER_H_

struct data_t
{
    int id_;
    char name_ [50];
};

void initialize(data_t *, const data_t *, const unsigned int);
void insert_one(data_t *, const unsigned int, const data_t, unsigned int*);
void erase_one(data_t *, const unsigned int, unsigned int);
void print(const data_t *, const unsigned int);
void clear(data_t *, unsigned int*);
data_t get_one(const data_t *, const int, const int);

#endif
