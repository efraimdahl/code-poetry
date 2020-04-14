#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>                                   

                                                 // \\ 
                                                // S \\
                                               //  H  \\ 
                                              //   A   \\
                                             //    R    \\      
                                            //     P     \\  
                                           //             \\ 
                                          //       !       \\
                                         //        !        \\
                                        //         !         \\
                                       //I N S T R U C T I O N\\
                                      //this code prints arrows\\
                                     //P L E A S E BE C A T IOUS\\
                                    //C o m p i l e w i t h g c c\\
                                   //T h e n run a . o u t fromthe\\
                                  //T T E E R R M M I I N N A A L L\\
                                 //DONTHURTYOURSELFPLSIWOULDFEELBAD!\\ 

void arrows(){
    for(int i = 0; i<10000;i++){
        int f = i%10;
        switch(f) {

            case 0:
                printf("O||||||||||||||||O\n");
                break;
            case 1:
                printf("OO||||||||||||||OO\n");
                break;
            case 2:
                printf("OO||||||||||||||OO\n");
                break;
            case 3:
                printf("OOO||||||||||||OOO\n");
                break;
            case 4:
                printf("OOOO||||||||||OOOO\n");
                break;
            case 5:
                printf("OOOOO||||||||OOOOO\n");
                break;
            case 6:
                printf("OOOOOO||||||OOOOOO\n");
                break;
            case 7:
                printf("OOOOOOO||||OOOOOOO\n");
                break;
            case 8:
                printf("OOOOOOOO||OOOOOOOO\n");
                break;
            case 9:
                printf("OOOOOOOOOOOOOOOOOO\n");
                break;
        }
    }
    return;
}

int main(int argc, char*argv[]){
    arrows();
    return 0;
}



    
