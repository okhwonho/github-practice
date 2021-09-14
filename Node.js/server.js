 const express = require('express');
 const app = express();

 app.listen(8080, function() {
     console.log('Listening on Server Open OK');
 });

 app.get('/pet', function(req, response) {
    response.send('This is Pet shopping site');
 });

 app.get('/beauty', function(req, response) {
    response.send('Beauty');
 });

 app.get('/', function(req, response) {
   console.log('Send OK');
    response.sendFile(__dirname + '../../bootstarp-5.1.1.-examples/blog/index.html');
    
   //  response.sendFile(__dirname + '/index.html');

app.use(express.static(__dirname + '../../bootstarp-5.1.1.-examples/assets/dist/css/bootstrap.min.css'));
 });