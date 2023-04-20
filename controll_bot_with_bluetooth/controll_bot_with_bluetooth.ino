const int m11 = 11;
const int m12 = 10;
const int m21 = 9;
const int m22 = 8;

char str[2],i=0;

void forward()

{

   digitalWrite(m11, LOW);

   digitalWrite(m12, LOW);

   digitalWrite(m21, HIGH);

   digitalWrite(m22, LOW);

}


void backward()

{

   digitalWrite(m11, LOW);

   digitalWrite(m12, LOW);

   digitalWrite(m21, LOW);

   digitalWrite(m22, HIGH); 

}


void left()

{

   digitalWrite(m11, HIGH);

   digitalWrite(m12, LOW);

   delay(100);

   digitalWrite(m21, HIGH);

   digitalWrite(m22, LOW);

}


void right()

{

   digitalWrite(m11, LOW);

   digitalWrite(m12, HIGH);

   delay(100);

   digitalWrite(m21, HIGH);

   digitalWrite(m22, LOW);

}


void Stop()

{

   digitalWrite(m11, LOW);

   digitalWrite(m12, LOW);

   digitalWrite(m21, LOW);

   digitalWrite(m22, LOW);

}


void setup() 

{

  Serial.begin(9600);

  pinMode(m11, OUTPUT);

  pinMode(m12, OUTPUT);

  pinMode(m21, OUTPUT);

  pinMode(m22, OUTPUT);

}


void loop() 

{

  while(Serial.available())

  {

    char ch=Serial.read();

    str[i++]=ch;

    

    if(str[i-1]=='1')

    {

     Serial.println("Forward");

     forward();

     i=0;

    }


    else if(str[i-1]=='2')

    {

     Serial.println("Left");

     right();

     i=0;

    }


    else if(str[i-1]=='3')

    {

      Serial.println("Right");

      left();

      i=0;

    }

    

    else if(str[i-1]=='4')

    {

      Serial.println("Backward");

      backward();

      i=0;

    }


    else if(str[i-1]=='5')

    {

      Serial.println("Stop");

      Stop();

      i=0;

    }

    delay(100);

  }
}
