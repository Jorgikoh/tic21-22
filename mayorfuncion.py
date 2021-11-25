def devuelve_el_mayor(num1,num2,num3):
    if(num1>num2 and num1>num3):
        mayor=num1
    else:
        if(num2>num3 and num2>num1):
            mayor=num2
        else:
            mayor=num3
    print(mayor)
def dameelmayor():
    num1=input("pon un numero: ")
    num2=input("pon otro numero: ")
    num3=input("pon el ultimo numero: ")
    return(devuelve_el_mayor(num1,num2,num3))
dameelmayor()
        
