def tabla():
    numero=input("que tabla deseas: ")
    print("*************************")
    print("*  TABLA DEL "+str(numero))
    while(cont<11):
        print(str(numero) +" x "+ str(cont)+ " = " str(numero*cont))
        cont=cont+1

tabla()
               
