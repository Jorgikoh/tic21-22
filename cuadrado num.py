def cuadrado():
    fila=""
    num=input("numero: ")
    for fil in range(1,num+1):
        if(fil%2==1):
            letra="1"
        else:
            letra="0"
        for col in range(1,num+1):
            fila=fila+letra
        print fila
        fila=""
     
cuadrado()
