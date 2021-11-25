def devuelve_mayor_10():
    mayor= input("introduce un numero: ")
    for con in range(1,10):
        num=input("introduce otro numero: ")
        if(num>mayor):
            mayor=num
    print("mayor= "+str(mayor))

devuelve_mayor_10()
