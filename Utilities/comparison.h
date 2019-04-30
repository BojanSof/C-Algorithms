#ifndef COMPARISON_H
#define COMPARISON_H

//Int
int compInt(void *a, void *b)
{
    if(*(int*)a > *(int*)b) return 1;
    if(*(int*)a < *(int*)b) return -1;
    else return 0;
}

int lessInt(void *a, void *b)
{
    if(*(int*)a < *(int*)b) return 1;
    else return 0;
}

int less_equalInt(void *a, void *b)
{
    if(*(int*)a <= *(int*)b) return 1;
    else return 0;
}

int greaterInt(void *a, void *b)
{
    if(*(int*)a > *(int*)b) return 1;
    else return 0;
}

int greater_equalInt(void *a, void *b)
{
    if(*(int*)a >= *(int*)b) return 1;
    else return 0;
}

int equalInt(void *a, void *b)
{
    if(*(int*)a == *(int*)b) return 1;
    else return 0;
}

int not_equalInt(void *a, void *b)
{
    if(*(int*)a != *(int*)b) return 1;
    else return 0;
}

//Float
int compFloat(void *a, void *b)
{
    if(*(float*)a > *(float*)b) return 1;
    if(*(float*)a < *(float*)b) return -1;
    else return 0;
}

int lessFloat(void *a, void *b)
{
    if(*(float*)a < *(float*)b) return 1;
    else return 0;
}

int less_equalFloat(void *a, void *b)
{
    if(*(float*)a <= *(float*)b) return 1;
    else return 0;
}

int greaterFloat(void *a, void *b)
{
    if(*(float*)a > *(float*)b) return 1;
    else return 0;
}

int greater_equalFloat(void *a, void *b)
{
    if(*(float*)a >= *(float*)b) return 1;
    else return 0;
}

int equalFloat(void *a, void *b)
{
    if(*(float*)a == *(float*)b) return 1;
    else return 0;
}

int not_equalFloat(void *a, void *b)
{
    if(*(float*)a != *(float*)b) return 1;
    else return 0;
}

//Double
int compDouble(void *a, void *b)
{
    if(*(double*)a > *(double*)b) return 1;
    if(*(double*)a < *(double*)b) return -1;
    else return 0;
}

int lessDouble(void *a, void *b)
{
    if(*(double*)a < *(double*)b) return 1;
    else return 0;
}

int less_equalDouble(void *a, void *b)
{
    if(*(double*)a <= *(double*)b) return 1;
    else return 0;
}

int greaterDouble(void *a, void *b)
{
    if(*(double*)a > *(double*)b) return 1;
    else return 0;
}

int greater_equalDouble(void *a, void *b)
{
    if(*(double*)a >= *(double*)b) return 1;
    else return 0;
}

int equalDouble(void *a, void *b)
{
    if(*(double*)a == *(double*)b) return 1;
    else return 0;
}

int not_equalIntDouble(void *a, void *b)
{
    if(*(double*)a != *(double*)b) return 1;
    else return 0;
}

#endif //COMPARISON_H