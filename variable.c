#include <stdio.h>
int main (){

    int rahim; //এই variable টা memory তে 4 byte এর জায়গা দখল করলো
    rahim = 10; //memory এর দখলকৃত জায়গাতে value 10 assign হইলো
    
    float karim = 10.75;
    char habib = 'H';
    printf("%d %0.2f %c", rahim,karim,habib);
    return 0;
}