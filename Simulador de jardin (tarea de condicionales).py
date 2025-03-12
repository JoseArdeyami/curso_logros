print("Hola, bienvenido a Planta en letras simulator")
planta = input("¿Qué planta quieres sembrar?\n -FRESA\n -TOMATE\n -AJI PICANTE\n").upper()

if planta == "FRESA" or planta == "TOMATE" or planta == "AJI PICANTE":
    riego = input("¡Buena opción! ¿Con qué la quisieras regar?\n -AGUA\n -FERTILIZANTE\n").upper()
    if riego == "AGUA":
        print("Regar solo con agua en una plántula recién sembrada es la mejor opción.")
        fertilizante_vegetativo = input("Has avanzado a etapa vegetativa... Necesitas fertilizar. ¿Qué fertilizante le pondrás?\n -NITROGENO(N)\n -POTASIO Y FOSFORO(PK)\n").upper()
        if fertilizante_vegetativo == "NITROGENO" or fertilizante_vegetativo == "N":
            print("Has avanzado a etapa de floración exitosamente!")
            riego_floracion = input("¿Con qué la regarás ahora?\n -NITROGENO(N)\n -POTASIO Y FOSFORO(PK)\n -AGUA\n").upper()
            if riego_floracion == "NITROGENO" or riego_floracion == "N":
                print("La planta requería los componentes potasio y fósforo para el desarrollo de sus frutos.")
                print("Lograste obtener una buena cantidad de frutas, pero tienen mal pesaje.")
                print("Gracias por jugar. ¡Eres buen jardinero! Puedes volver a intentarlo para obtener mejores resultados.")
            elif riego_floracion == "POTASIO Y FOSFORO" or riego_floracion == "PK":
                print("¡Excelente opción! Le diste a la planta lo que requería en su etapa de floración.")
                print("Lograste obtener una buena cantidad de frutas con un buen pesaje.")
                print("Gracias por jugar. ¡Eres el mejor jardinero! Puedes volver a jugar cuando gustes.")
            elif riego_floracion == "AGUA":
                print("La planta no logró dar frutos por no tener algún fertilizante.")
                print("No lograste cosechar nada. Vuelve a intentarlo.")
            else:
                print("No la regaste con una opción válida.")
                print("La planta se secó. Vuelve a intentarlo.")
        elif fertilizante_vegetativo == "POTASIO Y FOSFORO" or fertilizante_vegetativo == "PK":
            print("Ahora mismo la planta en esta etapa no necesita estos componentes...")
            print("La planta ha dejado de crecer y llegó su etapa de floración siendo una pequeña planta.")
            riego_floracion = input("¿Ahora con qué la quieres regar?\n -NITROGENO(N)\n -POTASIO Y FOSFORO(PK)\n -AGUA\n").upper()
            if riego_floracion == "NITROGENO" or riego_floracion == "N":
                print("La planta no necesitaba NITROGENO, por lo cual no floreció.")
                print("Las raíces de la planta se pudrieron.")
                print("La planta ha muerto, no obtuvo los nutrientes necesarios. Vuelve a intentarlo.")
            elif riego_floracion == "POTASIO Y FOSFORO" or riego_floracion == "PK":
                print("¡Excelente opción! Lograste hacer que tus pocos frutos tomaran un poco de peso.")
                print("Lograste obtener pocas frutas, pero tienen buen tamaño.")
                print("Gracias por jugar. ¡Eres buen jardinero! Puedes volver a intentarlo para obtener mejores resultados.")
            elif riego_floracion == "AGUA":
                print("La planta no logró dar frutos por no tener algún fertilizante.")
                print("No lograste cosechar nada. Vuelve a intentarlo.")
            else:
                print("No la regaste con una opción válida.")
                print("La planta se secó. Vuelve a intentarlo.")
        else:
            print("No pusiste una opción acertada, ha dejado de crecer la planta...")
            print("Ha muerto la planta, vuelve a intentarlo!")
    elif riego == "FERTILIZANTE":
        print("Acabas de sobrefertilizar la plántula, por lo tanto, se quemó, vuelve a intentarlo...")
    else:
        print("No hiciste nada, se secó la planta. ¡Vuelve a intentarlo!")
else:
    print("No está esa opción disponible.")