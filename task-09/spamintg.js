var message = ""; //enter your message here 
var interval = 1  ; // enter in seconds 
var count = 10 ; //number of times u wanna spam
var notifyInterval = 5 ; 
var i = 0 ;
var timer = setInterval(function(){
	document.getElementsByClassName('composer_rich_textarea')[0].innerHTML = message;
	$('.im_submit').trigger('mousedown');	
	i++;
	if( i  == count )
	clearInterval(timer);
	if( i % notifyInterval == 0)
	console.log(i + ' MESSAGES SENT');
} , interval * 1000 ) ;
//use this in telegram web
//hope you liked my code
