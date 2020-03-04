var fs = require('fs');
var quotes = fs.readFileSync('assets/Quotes.txt').toString().split("\n");

# Counts total images
totalQuotes = quotes.length

# Get Quote
getQuote = ->
  # Gets random image from array
  activeQuotes = quotes[Math.floor((Math.random() * totalQuotes))]

  # Changes background of div
  $('div').text(activeQuotes)

getQuote()

  e.preventDefault()

  getQuote()
