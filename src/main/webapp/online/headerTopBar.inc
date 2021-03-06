<%@ page pageEncoding="UTF-8" %>
<!-- Header Top Bar Start -->
            <div class="top-bar">
               <div class="slidedown collapse">
                  <div class="container">
                     <div class="phone-email pull-left">
                        <a><i class="fa fa-phone"></i> Hotline : +49 30 664 04 09 00</a>
                        <a href="mailto:info@camunda.com"><i class="fa fa-envelope"></i> ${param.lang == 'de' ? 'E-Mail' : 'Email'} : info@camunda.com</a>
                     </div>
                     <div class="follow-us pull-right">
                        <ul class="social pull-left">
                           <li class="facebook"><a href="#"><i class="fa fa-facebook"></i></a></li>
                           <li class="twitter"><a href="#"><i class="fa fa-twitter"></i></a></li>
                           <li class="dribbble"><a href="#"><i class="fa fa-dribbble"></i></a></li>
                           <li class="linkedin"><a href="#"><i class="fa fa-linkedin"></i></a></li>
                           <li class="rss"><a href="#"><i class="fa fa-rss"></i></a></li>
                        </ul>
                        <div id="search-form" class="pull-right">
                           <form action="#" method="get">
                              <input type="text" class="search-text-box" placeholder="${param.lang == 'de' ? 'Suchen...' : 'Search...'}">
                           </form>
                        </div>
                     </div>
                  </div>
               </div>
            </div>
           <!-- Header Top Bar End -->
