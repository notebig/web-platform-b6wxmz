
<div class="topbarGV"   > </div>


 <div class="w3-row-padding" style="background-color: #efefef;">



    <!-- about-->
   <?
   include'about.inc'
?>

 </div>
 

 



<footer class="w3-center w3-black w3-padding-16">

<p>

 <span style="color:#ffffff;">
   สามเอ็มคาร์แคร์ เดอะโปรช้อยส์<br/>ศูนย์บริการดูแลรักษารถยนต์เคลือบแก้ว ด้วยผลิตภัณฑ์ 3M<br/><br/>
 ปั๊มซัสโก้ ถนนราชพฤกษ์ ตรงข้ามเดอะเซอรเคิล<br/>
32/4-5 ม.13  แขวงบางระมาด เขตตลิ่งชั่น กรุงเทพฯ 10170 

 
 <br/> Copyright © 2011 <br/>
 <script type="text/javascript" language="javascript1.1" src="http://tracker.stats.in.th/tracker.php?sid=55883"></script><noscript><a target="_blank" href="http://www.stats.in.th/">www.Stats.in.th</a></noscript>
</p>

</footer>

<script>
// Automatic Slideshow - change image every 4 seconds
var myIndex = 0;
carousel();

function carousel() {
    var i;
    var x = document.getElementsByClassName("mySlides");
    for (i = 0; i < x.length; i++) {
       x[i].style.display = "none";  
    }
    myIndex++;
    if (myIndex > x.length) {myIndex = 1}    
    x[myIndex-1].style.display = "block";  
    setTimeout(carousel, 4000);    
}

// Used to toggle the menu on small screens when clicking on the menu button
function myFunction() {
    var x = document.getElementById("navDemo");
    if (x.className.indexOf("w3-show") == -1) {
        x.className += " w3-show";
    } else { 
        x.className = x.className.replace(" w3-show", "");
    }
}

// When the user clicks anywhere outside of the modal, close it
var modal = document.getElementById('ticketModal');
window.onclick = function(event) {
  if (event.target == modal) {
    modal.style.display = "none";
  }
}
</script>