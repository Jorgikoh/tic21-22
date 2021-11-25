def sustituye_vocales():
    palabra=raw_input("palabra: ")
    cont=0
    letra=raw_input("que letra quieres poner? ")
    while(cont<len(palabra)):
        if(palabra[cont]=='a'):
            print(letra)
        else:
            if(palabra[cont]=='e'):
                print(letra)
            else:
                if(palabra[cont]=='i'):
                    print(letra)
                else:
                    if(palabra[cont]=='o'):
                        print(letra)
                    else:
                        print(palabra[cont])
        cont=cont+1
        
    print("palabra transformada"+ palabra)

sustituye_vocales()
