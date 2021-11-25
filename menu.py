def menu():
    #Pedimos dos numeros
    error=1
    while(error==1):
        num1=input("introduce un numero: ")
        num2=input("introduce otro numero: ")
     
        print("****************************")
        print("*           menu           *")
        print("****************************")
        print("1. sumar")
        print("3. restar")
        print("3. multipricacion")
        print("4. division")
        opcion=0
        while(opcion<=0 or opcion>4):
            opcion=input(" elige: ")
            if(num2==0 and opcion==4):
                error=1
                print("eleccion erronea no puedo dividir por 0")
            else:
                error=0
    print("Has elegido la opcio "+str(opcion))

    
    #opcion suma
    if(opcion==1):
        print(num1+num2)
        #opcion resta
    else:
        if(opcion==2):
            print(num1-num2)
            #opcion producto
        else:
            if(opcion==3):
                print(nume1*num2)
                #opcion conciente
            else:
                 print(float(num1)/num2)
  
   
    

menu()
