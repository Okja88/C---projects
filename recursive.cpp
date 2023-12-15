#include<stdio.h>
void fun(int a){
    if (a==1)
    return; // Base Case
    printf("%d", a);
    fun(a-1);    //Recursive step
}
int main(){
    int a=4;
    fun(a);
}