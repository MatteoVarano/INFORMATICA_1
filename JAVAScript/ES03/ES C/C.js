n1 = parseInt(prompt("Inserisci il primo numero"))
n2 = parseInt(prompt("inserisci il secondo numero"))
segno = prompt("iserisci uno di questi segni per definire che operazione fare + - / * **")

if(Number.isNaN(n1) || Number.isNaN(n2)){
    alert("uno dei due numeri non e' un numero")
}
else{
    switch(segno){
        case "+": risultato=n1+n2
                  break

        case "-": risultato=n1-n2
                  break

        case "/": risultato=n1/n2
                  break
        
        case "*": risultato=n1*n2
                  break

        case "**": risultato=n1**n2
                  break

        default: alert("segno inserito inesistente")
        
    }
    
    alert("il risultato e': " + risultato)

}