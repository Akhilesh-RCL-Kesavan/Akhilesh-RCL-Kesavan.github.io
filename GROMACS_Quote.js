var fs = require('fs');
var quotes = fs.readFileSync('assets/Quotes.txt').toString().split("\n");

# Counts total images
totalQuotes = quotes.length

# Get Quote
function newQuote() {
  var randomnumber = Math.floor((Math.random() * totalQuotes))
  document.getElementById('quoteDisplay').innerHTML = quotes[randomnumber]
}
