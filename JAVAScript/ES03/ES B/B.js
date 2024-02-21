let Libro = {
    Titolo:"Five Nights at Freddy's: The Silver Eyes",
    Autore:"Scott Cawthon",
    pubblicazione:"17 dicembre 2015",
    Genere:"Horror",
    pagine:387,
}

for (let key in Libro) {
    console.log(`${key} -> ${Libro[key]}`);
  }
  