 if (a=='6' )
   {
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    if(c>6)
       {
        digitalWrite(13,HIGH);
        
      
      
       } 
  
   }
  if (temp>24)
    {
     digitalWrite(7,HIGH); 
     delay(50);
     digitalWrite(7,LOW);
     delay(50);
     ;
    
    }
   else
   {
    digitalWrite(7,LOW);
   }
