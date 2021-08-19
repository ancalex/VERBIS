#ifndef FR_PAGE_ADMIN_FR_H_
#define FR_PAGE_ADMIN_FR_H_

//
//  HTML PAGE
//

const char PAGE_AdminMainPage[] PROGMEM = R"=====(
<meta name="viewport" content="width=device-width, initial-scale=1" />
<strong>VERBIS Administration</strong>
<hr>
<a href="config.html" style="width:250px" class="btn btn--m btn--blue" >Configuration du r�seau</a><br>
<a href="info.html"   style="width:250px"  class="btn btn--m btn--blue" >Informations sur le r�seau</a><br>
<a href="ntp.html"   style="width:250px"  class="btn btn--m btn--blue" >Param�tres NTP</a><br>
<a href="time.html"   style="width:250px"  class="btn btn--m btn--blue" >R�glage manuel de l'heure</a><br>
<a href="display.html"   style="width:250px"  class="btn btn--m btn--blue" >Param�tres d'affichage</a><br>

<script>
window.onload = function ()
{
	load("style.css","css", function() 
	{
		load("microajax.js","js", function() 
		{
				// Do something after load...
		});
	});
}
function load(e,t,n){if("js"==t){var a=document.createElement("script");a.src=e,a.type="text/javascript",a.async=!1,a.onload=function(){n()},document.getElementsByTagName("head")[0].appendChild(a)}else if("css"==t){var a=document.createElement("link");a.href=e,a.rel="stylesheet",a.type="text/css",a.async=!1,a.onload=function(){n()},document.getElementsByTagName("head")[0].appendChild(a)}}

</script>

)=====";




#endif /* FR_PAGE_ADMIN_FR_H_ */
