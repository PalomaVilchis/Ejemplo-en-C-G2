//Calculator
//By : Axel Steven Paz Bonilla
//Simple calculator no conflicts


#include <stdio.h>
int main()
{
    float data=0, x=0, y=0, res=0;
    int ok = 0;
    VAMOS:
    printf("SUPER CALCULADORA");
    printf("Choose operation:\n1=sum\n2=substraction\n3=multiplication\n4=division\n");
    scanf("%f",&data);
    printf("Give two numbers:\n");
    scanf("%f %f",&x,&y);
    
if(data == 1){
    res=x+y;
    printf("\n");
    printf("%.2f",res);
            
}
else if(data == 2){
    res=x-y;
    printf("\n");
    printf("%.2f",res);
            
}
else if(data == 3){
    res=x*y;
    printf("\n");
    printf("%.2f",res);
        
}
else if(data == 4){
    res=x/y;
    printf("\n");
    printf("%.2f",res);
        
}
else{
    return 0;
}
    printf("\n¿Quiere hacer otra operación? Teclee 5, para salir teclee 0\n");
    scanf("%d",&ok);
    if(ok==5){
        goto VAMOS;
    }
    else{
        goto END;
    }
    END:
    return 0;
}