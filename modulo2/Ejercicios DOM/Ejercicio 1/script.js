const boton = document.getElementById("miBoton");

boton.addEventListener("click", function() {
    const colorAleatorio = '#' + Math.floor(Math.random()*16777215).toString(16);
    boton.style.backgroundColor = colorAleatorio;
});