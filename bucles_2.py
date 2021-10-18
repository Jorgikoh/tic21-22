def bucles_while():
    suma=0
    continuar="s"
    while(continuar=="s"):
        num=input("introduce un numero: ")
        suma=suma+num
        continuar=raw_input("¿quieres leer un numero mas?[s/n]: ")
    print("suma= "+ str(suma))
bucles_while()
