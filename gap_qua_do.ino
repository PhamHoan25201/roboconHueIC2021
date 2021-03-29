 //****bố trí bánh xe****//
//bánh 1 -------- bánh 2
//bánh 3 -------- bánh 4
//****bố trí cảm biến****//
//trước: 39-38-37-36-35-34
//sau: 27-26-25-24-23-22
//phải: 33-32-31-30-29-28
//trái: 45-44-43-42-41-40

 void chay_gap_qua_do_san_do(){
       kep();
   chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2000, 1, 150, 150, 25);
       kep();
       delay(500);
       haxuong();
       delay(500);
       tha();
       delay(500);
       nanglen();
       delay(500);

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 40, 1 , 1, 230, 230, 25);

  delay(500);

  quay_bat_line(quay_trai, 150, 30);

  delay(500);

  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2700, 1, 200, 200, 30);   

       haxuong(); 
       delay(500);
       kep();
       delay(500);
       nanglen();
       delay(500);
 }
 void chay_gap_qua_do_san_xanh(){

   chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2000, 1, 100, 100, 25);

  delay(2000);

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 30, 1 , 1, 150, 150, 25);

  delay(1000);

  quay_bat_line(quay_phai, 120, 42);

  delay(1000);

  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2600, 1, 120, 120, 30);   

   delay(2000);
 }
