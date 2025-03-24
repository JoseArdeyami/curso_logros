const elementoEliminar = document.getElementById("elementoEliminar");
const eliminarElemento = document.getElementById("eliminarElemento");
const miLista = document.getElementById("miLista");

eliminarElemento.addEventListener("click", function() {
    miLista.removeChild(elementoEliminar);
});