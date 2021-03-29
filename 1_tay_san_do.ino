 //****bố trí bánh xe****//
//bánh 1 -------- bánh 2
//bánh 3 -------- bánh 4
//****bố trí cảm biến****//
//trước: 39-38-37-36-35-34
//sau: 27-26-25-24-23-22
//phải: 33-32-31-30-29-28
//trái: 45-44-43-42-41-40

 void mot_tay_gap_qua_do_san_do(){
         
       chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2000, 1, 150, 150, 25);
       
       tha();
       
//       delay(500);
       
       haxuong();
       
//       delay(500);
       
       kep();
       
//       delay(500);
       
       nanglen();
       
//       delay(500);
       
       chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 40, 1 , 1, 230, 230, 25);
       
       delay(500);
       
       quay_bat_line(quay_trai, 150, 30);
       
       delay(500);
       
       chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2800, 1, 200, 200, 30);
          
       haxuong(); 
       
       delay(500);
       
       tha();
       
       delay(500);
       
       nanglen();
       
       delay(500);
 }
 void mot_tay_gap_qua_xanh_do_san_do(){

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 31, 1 , 1, 130, 130, 25);

  delay(500);


  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 100, 0, 100, 100, 30);

  delay(500);

  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 5600, 0, 230, 230, 30);

  delay(500);
  
  chay_do_line_do_encoder (cb_truoc_sau, chay_lui, 50, 0, 150, 150, 30);

  delay(500);

  chay_do_line_doc_cam_bien (cb_trai_phai, chay_phai, 25, 1 , 1, 150, 160, 25);

  delay(500);

  chay_do_line_do_encoder (cb_truoc_sau, chay_lui, 100, 0, 100, 100, 30);
  
  delay(500);
  
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 42, 1 , 1, 150, 150, 25);
  
  delay(500);


  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 50, 0, 150, 150, 30);

  delay(500);
 
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 42 , 1 , 1, 100, 100, 25);

   tha();
//   delay(500);
   haxuong();
//   delay(500);
   kep();
//   delay(500);
   nanglen();
//   delay(500);


  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 36 , 1 , 1, 100, 100, 25);

  delay(500);
  
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 30, 0, 100, 100, 30);

  delay(1000);
  
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 42 , 1 , 1, 90, 90, 25);

  delay(500);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 20, 0, 100, 100, 30);

  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 36 , 1 , 1, 150, 150, 25);

  delay(500);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 20, 0, 100, 100, 30);

  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 36 , 1 , 1, 150, 150, 25);

  delay(500);
   chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 850, 1, 150, 150, 25);
   delay(500);
   haxuong(); 
   delay(500);
   tha();
   delay(500);
   nanglen();
   delay(500);
 }
 void mot_tay_gap_qua_xanh_san_do(){
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 42 , 1 , 1, 100, 100, 25);
  
  delay(500);
  
  quay_bat_line(quay_trai, 150, 25);

  delay(500);

    chay_do_line_do_encoder (cb_truoc_sau, chay_lui, 4000, 0, 230, 230, 30);
  
  delay(500);

  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 24 , 1 , 1, 150, 150, 25);

  delay(500);

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 30 , 1 , 1, 120, 120, 25);

  delay(500);

   chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2000, 1, 150, 150, 25);
  
  delay(500);
  
  tha();
 
  delay(500);
 
  haxuong();
 
  delay(500);
 
  kep();
 
  delay(500);
 
  nanglen();
 
  delay(500);
  chay_do_line_do_encoder (cb_truoc_sau, chay_lui, 100, 0, 150, 150, 30);
  
  delay(500);

  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 2000, 0, 150, 150, 30);
  
  delay(500);

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 42 , 1 , 1, 120, 120, 25);

  delay(500);

  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 36 , 1 , 1, 150, 150, 25);

  delay(500);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 200, 0, 120, 120, 30);
  
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 30 , 1 , 1, 150, 150, 25);

  delay(500);

  quay_bat_line(quay_phai, 150, 42);

  delay(500);

   chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 820, 1, 150, 150, 25);
  
  delay(500);

  haxuong(); 
       
// delay(500);
 
 tha();
 
// delay(500);
 
 nanglen();
 
 delay(5000);

  }
