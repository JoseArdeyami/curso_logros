precio_producto = float(input("Ingresa el precio del producto: "))
porcentaje_descuento = float(input("Ingresa el porcentaje de descuento: "))

descuento = (porcentaje_descuento / 100) * precio_producto
precio_final = precio_producto - descuento

print("El precio final con descuento es:", precio_final)

if precio_final < 100:
  print("El precio final es menor a 100.")
else:
  print("El precio final no es menor a 100.")
