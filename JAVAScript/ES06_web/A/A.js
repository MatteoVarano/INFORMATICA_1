const button = document.getElementById("myButton");

button.addEventListener('mouseover', function(){
    button.style.backgroundColor = "lightgreen";
});

button.addEventListener('mouseout', function(){
    button.style.backgroundColor = "white";
});