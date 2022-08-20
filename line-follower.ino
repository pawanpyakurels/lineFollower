
//ir is high when there is no input

int leftPin=3;
int rightPin=2;
 int irVal=0;
 int turn=0;
 int rCount=0;
 int lCount=0;
 char flag="F";
 String data="";
 String stat="hawa";

 
void setup() {

 
 pinMode(2,INPUT);
 pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(13,OUTPUT);

  //attachInterrupt(digitalPinToInterrupt(2),breakf,FALLING);
  //attachInterrupt(digitalPinToInterrupt(3),leftf ,RISING);


  
   
 

}



void loop() 
{
  Serial.println(" ");
  Serial.print(digitalRead(2));
  Serial.print(digitalRead(3));
  Serial.print(digitalRead(8));
  
    
  if(digitalRead(2)==0 && digitalRead(3)==1 && digitalRead(8)==0)
  {
    while(digitalRead(2)==0){
  forward();
 
  delay(10);
  }
  while(digitalRead(2)==1){
    left();
   
    delay(10);
    }
  
  
  }

  else if(digitalRead(2)==0 && digitalRead(3)==0 && digitalRead(8)==0)
  {
    while(digitalRead(8)==0 && digitalRead(3)==0)
    {
      left(); 
      delay(10); 
    }
  }
  
 

  

  
 

    
  
  else{
    
   analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(11,0);
  
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);  
}


}

void forward()
{
   analogWrite(9,0);
    analogWrite(10,255);
    analogWrite(11,0);
  
 digitalWrite(4,1);
 digitalWrite(5,0);
 digitalWrite(6,1); 
 digitalWrite(7,0);
  
  
 }
void left()
 {
   analogWrite(9,255);
  analogWrite(10,0);
  analogWrite(11,0);
  
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(7,0);  
  
  
  
 }

void right()
{
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);  

  analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(11,255);

  
  }
