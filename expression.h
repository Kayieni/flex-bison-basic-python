#ifndef EXPRESSION_H
#define EXPRESSION_H

struct Variable
{
    enum { INTEGER, FFLOAT, IDENT, SSTRING, LAM, FUNCTION } type;
    enum { VAR =1, LITERAL =2 } data_type;
    union
    {
        float fval;
        int   ival;
	char string[1000];
    };
    char name[100];
};


 struct Array {
  struct Variable *array;
  size_t used;
  size_t size;
};



//--------------------- Dynamic Array for keeping info (Variable names , data, etc -----------------


void initArray(struct Array *a, size_t initialSize) ;

void insertArray(struct Array *a, struct Variable element) ;
 
void freeArray(struct Array *a) ;

//---------------------------------- Expressions functions --------------------------------
struct Variable value_assign (struct Variable var, struct Variable num, struct Array *a);
struct Variable add_calc (struct Variable num1 , struct Variable num2,struct Array *a, int check);
struct Variable minus_calc (struct Variable num1 , struct Variable num2,struct Array *a,int check);
struct Variable div_calc (struct Variable num1 , struct Variable num2,struct Array *a,int check);
struct Variable mul_calc (struct Variable num1 , struct Variable num2,struct Array *a,int check);
void print ( struct Variable num, struct Array *a);
struct Variable find_value(struct Array *a, struct Variable num,int check);
void clean_buff(struct Variable num);
void delete (struct Array *a, struct Variable num);
void items(struct Array *dic,struct Array *a);
void print_dictionary(struct Variable item,struct Array *a);
void setDefault(struct Variable item1, struct Variable item2, struct Array *dic, struct Array *a);
int find_key(struct Variable item, struct Variable key);
void fun_check(struct Array *functions, struct Variable fun);
#endif

