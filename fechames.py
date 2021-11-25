def fecha_mes():
    fecha=raw_input("introduce una fecha(dd/mm/aa): ")
    meses="EneFebMarAbrMayJunJulAgoSepOctNomDic"
    numero_mes=int(fecha[3])*10+int(fecha[4])
    print(numero_mes)
    mes_elegido=meses[(numero_mes-1)*3:(numero_mes-1)*3+3]
    print(mes_elegido)

fecha_mes()
