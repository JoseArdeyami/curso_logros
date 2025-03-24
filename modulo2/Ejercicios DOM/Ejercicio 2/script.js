const div = document.getElementById("miDiv");
const boton = document.getElementById("miBoton");

boton.addEventListener("click", function() {
    // Generar un color aleatorio
    const colorAleatorio = '#' + Math.floor(Math.random()*16777215).toString(16);

    // Cambiar el color de fondo del div
    div.style.backgroundColor = colorAleatorio;
});