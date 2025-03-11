numero = int(input("Ingresa un numero entero: "))

limite_inferior = 10
limite_superior = 20

if numero >= limite_inferior and numero <= limite_superior:
  print(numero, "esta dentro del rango [", limite_inferior, ",", limite_superior, "].")
else:
  print(numero, "esta fuera del rango [", limite_inferior, ",", limite_superior, "].")