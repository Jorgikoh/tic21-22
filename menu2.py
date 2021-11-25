def pinta_menu():
    print("****************************")
    print("*           MENU           *")
    print("****************************")
    print("1. SUMAR")
    print("2. RESTAR")
    print("3. MULTIPLICACION")
    print("4. DIVISION")
def manda_error():
    print("ELECCION ERRONEA. NO PUEDO DIVIVIR POR 0")


def suma(num1,num2):
    respuesta=num1+num2
    return(respuesta)
def resta(num1,num2):
    respuestaresta=num1-num2
    return(respuestaresta)
def producto(num1,num2):
    respuestaproducto=num1*num2
    return(respuestaproducto)
def cociente(num1,num2):
    respuestacociente=num1/num2
    return(respuestacociente)
def menu_2():
    #Pedimos dos numeros
    error=1
    while(error==1):
        num1=input("Introduce un numero: ")
        num2=input("introduce otro numero: ")
        pinta_menu()
        opcion=0
        while(opcion<=0 or opcion>4):
            opcion=input(" ELIGE: ")
            if(num2==0 and opcion==4):
                error=1
                manda_error()
            else:
                error=0
                print("Has elegido la opcion "+str(opcion))
    #OPCION SUMA
    if(opcion==1):
        print(suma(num1,num2))
        #OPCION RESTA
    else:
        if(opcion==2):
           print(resta(num1,num2))
            #OPCION PRODUCTO
        else:
            if(opcion==3):
               print(producto(num1,num2))
                #OPCION COCIENTE   
            else:
                print(cociente(float(num1),num2))


    
    
menu_2()
                
    
    
    



