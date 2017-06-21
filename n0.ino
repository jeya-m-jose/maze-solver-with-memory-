#include<avr/io.h>
#include<EEPROM.h>
int a,b,c,d,e,f,g;
//int l=0,
//int t[100];//1-left 2-right 3-str 4-360
//int k[50];
//int v[50];
//int i=0;
//int z=0,o=0,m=0;
int main()
{
  int i=0,l=0;
  int t[100];
  int k[50];
  int v[50];
  int z=0,o=0,m=0;
  //EEPROM.write(t[i],1);
  DDRB|=0b00000000;
  DDRD|=0b01111111;
  PORTD=0x00;
//  PORTB=0x00;
  //while(1)
  //{
  /*a=PINB&0b00010000;  //left
  b=PINB&0b00001000;  //centre
  c=PINB&0b00000100;  //centre
  d=PINB&0b00000010;  //centre
  e=PINB&0b00000001;  //right
  f=PINB&0b00100000; //for
  g=PINB&0b01000000; // blah
  while(1)
  {
  if(PINB==0x04)
  PORTD = 0xF5;
  if(PINB == 0x0D)
  PORTD = 0xF1;
  if(PINB == 0x06)
  PORTD = 0xF4;
  }
  }*/
  while(1)
  {
    if((PINB&0b10001011)==0b10001011&&(PINB&0b10001101)==0x00&&(PINB&0b10000111)==0x00&&(PINB&0b10001110)==0x00&&(PINB&0b00001111)==0x00)
    PORTD=0b00110101;
    else if(((PINB&0b10001011)==0b10001011)&&((PINB&0b10001101)==0b10001101)&&(PINB&0b10000111)==0x00&&(PINB&0b10001110)==0x00&&(PINB&0b00001111)==0x00)//left
    PORTD=0b00110100;
    else if(((PINB&0b10001011)==0b10001011)&&((PINB&0b10001101)==0x00)&&(PINB&0b10000111)==0b10000111&&(PINB&0b10001110)==0x00&&(PINB&0b00001111)==0x00)//right
    PORTD=0b00110001;
   // else if(((PINB&0b00000100)==0b00000100)&&((PINB&0b00000010)==0b00000010)&&(PINB&0b00001000)==0x00&&(PINB&0b00000001)==0b00000001&&(PINB&0b00010000)==0x00)//per left 11100
  else if(((PINB&0b10001011)==0b10001011)&&((PINB&0b10001101)==0b10001101)&&(PINB&0b10000111)==0x00&&(PINB&0b10001110)==0b10001110&&(PINB&0b00001111)==0x00)
  {
    EEPROM.write(t[i],1);
    PORTD=0b00110110;
    i++;
    //delay(1000);
    //PORTD=0x00;
  }
  //else if(((PINB&0b00000100)==0b00000100)&&((PINB&0b00000010)==0b00000010)&&(PINB&0b00001000)==0b00001000&&(PINB&0b00000001)==0b00000001&&(PINB&0b00010000)==0x00)//per left 11110
  else if(((PINB&0b10001011)==0b10001011)&&((PINB&0b10001101)==0b10001101)&&(PINB&0b10000111)==0b10000111&&(PINB&0b10001110)==0b10001110&&(PINB&0b00001111)==0x00)
  {
    EEPROM.write(t[i],1);
    PORTD=0b00110110;
    i++;
    //delay(1000);
    //PORTD=0x00;
  }
  //else if(((PINB&0b00000100)==0x00)&&((PINB&0b00000010)==0b00000010)&&(PINB&0b00001000)==0x00&&(PINB&0b00000001)==0b00000001&&(PINB&0b00010000)==0x00)//per left 11000
  else if(((PINB&0b10001011)==0x00)&&((PINB&0b10001101)==0b10001101)&&(PINB&0b10000111)==0x00&&(PINB&0b10001110)==0b10001110&&(PINB&0b00001111)==0x00)
  {
    EEPROM.write(t[i],1);
    PORTD=0b00110110;
    i++;
    //delay(1000);
    //PORTD=0x00;
  }
   // else if(((PINB&0b00000100)==0b00000100)&&((PINB&0b00000010)==0x00)&&(PINB&0b00001000)==0b00001000&&(PINB&0b00000001)==0x00&&(PINB&0b00010000)==0b00010000)//per right 00111
     else if(((PINB&0b10001011)==0b10001011)&&((PINB&0b10001101)==0x00)&&(PINB&0b10000111)==0b10000111&&(PINB&0b10001110)==0x00&&(PINB&0b00001111)==0b00001111)
    {
      if(PIND&0b00000000==0b00000000)
      {
        PORTD=0b00110101;
        EEPROM.write(t[i],3);
        i++;
      }
      else
      {
        EEPROM.write(t[i],2);
      PORTD=0b00111001;
      i++;
      }
    }
  //else if(((PINB&0b00000100)==0b00000100)&&((PINB&0b00000010)==0b00000010)&&(PINB&0b00001000)==0b00001000&&(PINB&0b00000001)==0x00&&(PINB&0b00010000)==0b00010000)//per right 01111
     else if(((PINB&0b00011011)==0b00011011)&&((PINB&0b00011101)==0b000111101)&&(PINB&0b00010111)==0b00010111&&(PINB&0b00011110)==0x00&&(PINB&0b00001111)==0x00)
    {
      if((PINB&0b00011111)==0b00011111)
      {
        EEPROM.write(t[i],3);
        PORTD=0b00111010;
        i++;}
        
      else
      {
        EEPROM.write(t[i],2);
      PORTD=0b00110001;
      i++;
      }
      //delay(1000);
      //PORTD=0x00;
    }
     //else if(((PINB&0b00000100)==0x00)&&((PINB&0b00000010)==0x00)&&(PINB&0b00001000)==0b00001000&&(PINB&0b00000001)==0x00&&(PINB&0b00010000)==0b00010000)//per right 00011
      else if(((PINB&0b00011011)==0x00)&&((PINB&0b00011101)==0x00)&&(PINB&0b00010111)==0b00010111&&(PINB&0b00011110)==0x00&&(PINB&0b00001111)==0b00001111)
     {
       if(PINB&0b00011111==0b00011111)
      {
        EEPROM.write(t[i],3);
      PORTD=0b00110101;
      i++;}
      
      else
      {
        EEPROM.write(t[i],2);
      PORTD=0b00111001;
      i++;
      }
      //delay(1000);
      //PORTD=0x00;
    }
     //else if(((PINB&0b00000100)==0b00000100)&&((PINB&0b00000010)==0b00000010)&&(PINB&0b00001000)==0b00001000&&(PINB&0b00000001)==0b00000001&&(PINB&0b00010000)==0b00010000)//all on
     else if(((PINB&0b00011011)==0b00011011)&&((PINB&0b00011101)==0b00011101)&&(PINB&0b00010111)==0b00010111&&(PINB&0b00011110)==0b00011110&&(PINB&0b00001111)==0b00010000)
    {
      if((PINB&0b11011111)==0b11011111&&(PINB&0b10111111)==0b10111111)//stop
      PORTD=0x00;
      //else if((PINB&0b00100000)==0b00100000&&(PINB&0b01000000)==0x00)//for
      //PORTD=0b00110101;
      else //left
      {
        EEPROM.write(t[i],1);
        PORTD=0b00110110;
        i++;
 }     
    }
   //else if(((PINB&0b00000100)==0x00)&&((PINB&0b00000010)==0x00)&&(PINB&0b00001000)==0x00&&(PINB&0b00000001)==0x00&&(PINB&0b00010000)==0x00)
    else if(((PINB&0b00011011)==0x00)&&((PINB&0b00011101)==0x00)&&(PINB&0b00010111)==0x00&&(PINB&0b00011110)==0x00&&(PINB&0b00001111)==0x00)
    {  EEPROM.write(t[i],4);
    PORTD=0b00110110;
    i++;
  }
  }

  EEPROM.write(c,i-1);
  d = EEPROM.read(c);
//  int l=0,f=0;
  while(l==d)
{
    k[l]=EEPROM.read(t[l]);
    l++;
}

for(z = 0 ; z <d-2;)
{
  m++;
  if(k[z] ==1 && k[z+1] ==4 && k[z+2] == 2)
  {
    v[m] = 4;
    z+=3;
    continue;
  }
  else if(k[z] ==1 && k[z+1] ==4 && k[z+2] == 3) 
  {
    v[m] = 2;
    z+=3;
    continue;
  }
  else if(k[z] ==2 && k[z+1] ==4 && k[z+2] == 1)
  {
    v[m] = 4;
    z+=3;
    continue;
  }
  else if(k[z] ==3 && k[z+1] ==4 && k[z+2] == 1)
  {
  v[m] = 2;
  z+=3;
  continue;
  }
  
  else if(k[z] ==3 && k[z+1] ==4 && k[z+2] == 3)
  {
    v[m] = 4;
    z+=3;
    continue;
  }
  else if(k[z] ==1 && k[z+1] ==4 && k[z+2] == 1)
  {
    v[m] = 3;
    z+=3;
    continue;
  }
  else
  {
  v[m] = k[z];
  z+=1;
  if(z==d-3)
  {o=1;
  e++;
  break;}
  }
}
if(o==1)
{
v[m] = k[z];
v[m+1] = k[z+1];
}
i=0;
while(1)
{
  if((PINB&0b00111110)==0b00111110||(PINB&0b00101111)==0b00101111)
  {
    if(v[i]==1)
    {
      PORTD=0b00110100;
      i++;
    }
    else if(v[i]==2)
    {
      PORTD=0b00110001;
      i++;
    }
    else if(v[i]==3)
    {
      PORTD=0b00110101;
      i++;
    }
    else if(v[i]==4)
    {
      PORTD=0b00110110;
      i++;
    }
}
}
}

