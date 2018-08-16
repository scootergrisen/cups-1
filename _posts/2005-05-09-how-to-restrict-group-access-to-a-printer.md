---
title: How To Restrict Group Access To A Printer
layout: post
permalink: /blog/:year-:month-:day-:title.html
---

Two ways of restricting groups from accessing a printer
       /usr/sbin/lpadmin -p printer -u allow:all 
      /usr/sbin/lpadmin -p printer -u allow:@staff,@students 
      /usr/sbin/lpadmin -p printer -u deny:@staff,@students 


 # Deny everyone except for groups staff and students
 <Printer my_printer>
 ...
 AllowUser @staff
 AllowUser @students
 </Printer>
 
 # Accept everyone except for groups staff and students
 <Printer my_printer>
 ...
 DenyUser  @staff
 DenyUser  @students
 </Printer>
