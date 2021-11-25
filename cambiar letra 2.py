def cambia_vocales_3():
    palabra= raw_input("di una palabra: ")
    x = raw_input("que vocal quieres que use: ")
    nueva_palabra=" "
    cont=0
    while(cont<len(palabra)):
        if(palabra[cont]=="a"):
            
            nueva_palabra=nueva_palabra+(x)
        else:
           if(palabra[cont]=="e"):
               
               nueva_palabra=nueva_palabra+(x)
           else:
               if(palabra[cont]=="i"):
                   
                   nueva_palabra=nueva_palabra+(x)
               else:
                   if(palabra[cont]=="o"):
                       
                       nueva_palabra=nueva_palabra+(x)
                   else:
                       nueva_palabra=nueva_palabra+(palabra[cont])
           
        cont=cont+1
    print("Palabra transformada "+nueva_palabra)
cambia_vocales_3()
