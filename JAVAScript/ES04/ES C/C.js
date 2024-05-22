function fattoriale(n) {
    if (n == 0) return 1;
    return n * fattoriale(n - 1);
}

function triangolo(righe) {
    ris = null
    stringa = ""
    for (i = 0; i < righe; i++) {
        for (j = 0; j < righe * 5 / 2 - i * 2; j++) {
            stringa += " "
        }

        for (j = 0; j < i + 1; j++) {
            ris = fattoriale(i) / (fattoriale(j) * fattoriale(i - j))
            stringa += "  " + ris + "  "
        }
        console.log(stringa)
        stringa = ""
    }

}

n = prompt("Inserisci il numero di righe: ");
triangolo(n);