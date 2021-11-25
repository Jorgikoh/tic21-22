def palabra_2():
    nombre=raw_input("nombre: ")
    print("buenos dias, "+nombre)
    print("tu lindo nombre empieza por la letra "+nombre[0])
    print("voy a deletrear tu nombre")
    for cont in range(0,20):
        print(nombre[cont])

palabra_2()
