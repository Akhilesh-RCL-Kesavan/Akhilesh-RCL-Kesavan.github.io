---
layout: default
title: Activities
permalink: /activities
---
<p><br></p>

Activities
==========

<hr style="height:2px;border-width:0;color:gray;background-color:gray">

<p><br></p>

**Academic Events**
------------

<p><br></p>

### **Engineering meets Evolution Symposium, EMBO 2021**

Co-organizer

<!-- Slideshow container -->
<div class="slideshow-container">

  <!-- Full-width images with number and caption text -->
  <div class="mySlides fade">
    <img src="/assets/EMBO/Cultural_Night_11.jpg" alt="Cultural_Night_11>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Cultural_Night_12.jpg" alt="Cultural_Night_12>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Cultural_Night_3.jpg" alt="Cultural_Night_3>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day1_0.jpg" alt="Day1_0>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day1_1.jpg" alt="Day1_1>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day1_21.jpg" alt="Day1_21>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day1_24.jpg" alt="Day1_24>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day1_72.jpg" alt="Day1_72>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day1_74.jpg" alt="Day1_74>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day1_77.jpg" alt="Day1_77>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day1_78.jpg" alt="Day1_78>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day1_8.jpg" alt="Day1_8>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day2_20.jpg" alt="Day2_20>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day2_3.jpg" alt="Day2_3>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day3_13.jpg" alt="Day3_13>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day3_18.jpg" alt="Day3_18>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day3_20.jpg" alt="Day3_20>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day3_27.jpg" alt="Day3_27>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day3_32.jpg" alt="Day3_32>
  </div>	<div class="mySlides fade">
    <img src="/assets/EMBO/Day3_5.jpg" alt="Day3_5>
  </div>

  <!-- Next and previous buttons -->
  <a class="prev" onclick="plusSlides(-1)">&#10094;</a>
  <a class="next" onclick="plusSlides(1)">&#10095;</a>
</div>

<br>

<hr style="width:50%; margin-left:25%">

<br>

### **Biofest 2016**

Marketing, Student Relations and Hospitality, Team Head

<br>

<hr style="height:2px;border-width:0;color:gray;background-color:gray">

<br>

**Extracurriculars**
---------------

<br>

### **Coding**

<br>

<hr style="width:50%; margin-left:25%">

<br>

<!-- ### **Photography**

<br>

<hr style="width:50%; margin-left:25%">

<br>

### **Graphic Design**

<br>

<hr style="width:50%; margin-left:25%">

<br>

### **Gaming**

<br>
-->
<script>
let slideIndex = 1;
showSlides(slideIndex);

function plusSlides(n) {
  showSlides(slideIndex += n);
}

function currentSlide(n) {
  showSlides(slideIndex = n);
}

function showSlides(n) {
  let i;
  let slides = document.getElementsByClassName("mySlides");
  let dots = document.getElementsByClassName("dot");
  if (n > slides.length) {slideIndex = 1}    
  if (n < 1) {slideIndex = slides.length}
  for (i = 0; i < slides.length; i++) {
    slides[i].style.display = "none";  
  }
  for (i = 0; i < dots.length; i++) {
    dots[i].className = dots[i].className.replace(" active", "");
  }
  slides[slideIndex-1].style.display = "block";  
  dots[slideIndex-1].className += " active";
}
</script>
