DECLARE num1 , num2 , num3 : INTEGER

INPUT num1 , num2 , num3

IF num1>num2 THEN

    IF num1>num3 THEN
    
       PRINT "num1 is the largest"
       
    ELSE
    
       PRINT "num3 is the largest"
       
    ENDIF
    
ELSE IF num2>num3 THEN

    PRINT "num2 is the largest"
    
ELSE

    PRINT "num3 is the largest"
    
ENDIF    
