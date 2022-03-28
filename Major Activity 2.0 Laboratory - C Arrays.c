#include <stdio.h>
int auth(int db[3][2],int id, int pin){
    int flag = 0;
    for(int i = 0; i<3; i++){
        if(id == db[i][0] && pin == db[i][1]){
            flag = 1;
        }
    }
    return flag;
}
int main(){
    int db[3][2] = {{1234,1234},{2345,2345},{3456,3456}};
    int id,pin;
    printf("Enter ID Number: \n");
    scanf("%d",&id);
    printf("Enter PIN: \n");
    scanf("%d",&pin);
    if(auth(db,id,pin)){
        printf("\n\nYou have successfully logged in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}
