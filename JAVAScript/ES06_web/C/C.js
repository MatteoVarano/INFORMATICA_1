const text = document.getElementById("myInput");

text.addEventListener("focus", () => {
    text.style.backgroundColor = "lightgreen";
});

text.addEventListener("blur", () => {
    text.style.backgroundColor = "white";
});