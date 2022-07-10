2. Write a function to store "G_Str_SteeringAngle_sint" to "G_Msg_SteeringInformation_Byte" as shown below.
signed int G_Str_SteeringAngle_sint = -60;
unsigned char G_Msg_SteeringInformation_Byte[3u];"


#include<stdio.h>

int main(){
    
signed char G_Str_SteeringAngle_sint = -60;            //1111 1100 0100

for(int i=11;i>=0;i--){

printf("%x ",(G_Str_SteeringAngle_sint>>i)&1);         //converting the decimal to binary

}

unsigned char G_Str_SteeringAngle_Byte[3u]={0x00,0x00,0x00};           //assign the array size is 3

G_Str_SteeringAngle_Byte[0]=((G_Str_SteeringAngle_sint>>0)&~(1<<2));   // assign 10,11 bits  in array of 0

G_Str_SteeringAngle_Byte[1]=(G_Str_SteeringAngle_sint>>2);             //assign 2 to 9 bits in array of 1 

G_Str_SteeringAngle_Byte[2]=(G_Str_SteeringAngle_sint<<6);             //assign 0 to 1 bit in array of 2

for(int i=0;i<3;i++){

printf("\nG_Str_SteeringAngle_sint[%d]:\n",i);

for(int j=7;j>=0;j--)

printf("%d ",(G_Str_SteeringAngle_Byte[i]>>j)&1);

}

}
