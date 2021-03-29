//****bố trí bánh xe****//
//bánh 1 -------- bánh 2
//bánh 3 -------- bánh 4
//****bố trí cảm biến****//
//trước: 39-38-37-36-35-34
//sau: 27-26-25-24-23-22
//phải: 33-32-31-30-29-28
//trái: 45-44-43-42-41-40

void hai_tay_gap_qua_do_san_xanh() {
  haxuong();
  tha();
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2000, 1, 255, 255, 25);
  kep();
  nanglen();
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 33, 1 , 1, 255, 255, 25);
  quay_bat_line(quay_phai, 255, 42);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2600, 1, 200, 200, 30);
  haxuong();
  
  tha();

}
void hai_tay_gap_2_qua_do_san_xanh() {

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 42, 1 , 1, 255, 255, 25);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 6000, 0, 255, 255, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 42, 1 , 1, 255, 255, 25);
  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 36, 1 , 1, 255, 255, 25);
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 42 , 1 , 1, 170, 170, 25);
  kep();
  nanglen();
  chay_do_line_do_encoder (cb_truoc_sau, chay_lui, 50, 0, 150, 150, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 30, 1 , 1, 255, 255, 25);
  quay_bat_line(quay_trai,255,42);
  delay(500);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 1700, 1, 200, 200, 30);
  haxuong_mot();
  tha_mot();
  kep_mot();
  nanglen_mot();
  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 150, 0, 255, 255, 30);
  delay(500);
  chay_do_line_do_encoder (cb_truoc_sau, chay_lui, 1800, 0, 255, 255, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 36, 1 , 1, 255, 255, 25);
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 42, 1 , 1, 150, 150, 25);
  delay(500);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 100, 0, 120, 120, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 24, 1 , 1, 200, 200, 25);
  delay(500);
  quay_bat_line(quay_trai,255,36);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 800, 1, 150, 150, 30);
  delay(500);
  haxuong_mot();
  tha_mot();
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_phai, 36, 1 , 1, 200, 200, 25);
  delay(500);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 100, 0, 150, 150, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 42, 1 , 1, 200, 200, 25);
  quay_bat_line(quay_trai,150,30);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 800, 1, 120, 120, 30);
  delay(500);
  haxuong();
  tha();
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 42, 1 , 1, 110, 110, 25);
  delay(5000);
}
void chi_gap_xanh_do_san_xanh() {
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 33, 1 , 1, 230, 230, 25);
  quay_bat_line(quay_phai, 150, 42);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 100, 1, 150, 150, 30);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 42, 1 , 1, 230, 230, 25);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 6000, 0, 255, 255, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 42, 1 , 1, 200, 200, 25);
  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 36, 1 , 1, 150, 150, 25);
  delay(500);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 50, 0, 120, 120, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 30 , 1 , 1, 120, 120, 25);
  delay(500);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 700, 1, 150, 150, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_phai, 24, 1 , 1, 230, 230, 25);
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 30, 1 , 1, 230, 230, 25);
  delay(500);
  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 50, 1, 100, 100, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_phai, 36, 1 , 1, 150, 150, 25);
  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 50, 1, 100, 100, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_phai, 36, 1 , 1, 150, 150, 25);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 800, 1, 150, 150, 25);
  delay(5000);


}

void chi_gap_xanh_san_xanh() {
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 33, 1 , 1, 230, 230, 25);
  quay_bat_line(quay_phai, 150, 42);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 100, 1, 150, 150, 30);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 42, 1 , 1, 230, 230, 25);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 6000, 0, 255, 255, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 31, 1 , 1, 200, 200, 25);
  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 36, 1 , 1, 150, 150, 25);
  delay(500);
  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 1300, 0, 120, 120, 30);
  delay(500);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 100, 0, 150, 150, 30);
  delay(500);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2100, 0, 150, 150, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_phai, 24, 1 , 1, 130, 130, 25);
  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 30, 1 , 1, 110, 110, 25);
  delay(500);
  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 100, 0, 100, 100, 30);
  delay(500);
  chay_do_line_doc_cam_bien (cb_trai_phai, chay_phai, 36, 1 , 1, 150, 150, 25);
  delay(500);
  quay_bat_line(quay_phai, 150, 24);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 800, 1, 150, 150, 25);
  tha();
  delay(5000);
}

void chi_gap_2_qua_san_xanh() {
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 33, 1 , 1, 230, 230, 25);
  quay_bat_line(quay_phai, 150, 42);
  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 100, 1, 150, 150, 30);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 42, 1 , 1, 230, 230, 25);
  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 6000, 0, 255, 255, 30);
  
  delay(500);

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 42, 1 , 1, 200, 200, 25);

  delay(500);

  chay_do_line_doc_cam_bien (cb_trai_phai, chay_trai, 36, 1 , 1, 150, 150, 25);

  delay(500);

  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 50, 0, 100, 100, 30);

  delay(500);

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 42 , 1 , 1, 120, 120, 25);
  kep();
  nanglen();
  chay_do_line_do_encoder (cb_truoc_sau, chay_lui, 50, 0, 150, 150, 30);

  delay(500);
  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 30, 1 , 1, 200, 200, 25);

  delay(500);

  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 1400, 0, 150, 150, 30);

  delay(500);

  chay_do_line_do_encoder (cb_trai_phai, chay_trai, 100, 0, 150, 150, 30);

  delay(500);

  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 2100, 0, 200, 200, 30);

  delay(500);

  chay_do_line_doc_cam_bien (cb_trai_phai, chay_phai, 24, 1 , 1, 130, 130, 25);

  delay(500);

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 30, 1 , 1, 110, 110, 25);

  delay(500);


  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 100, 0, 120, 120, 30);

  delay(500);

  chay_do_line_doc_cam_bien (cb_trai_phai, chay_phai, 36, 1 , 1, 200, 200, 25);

  delay(500);

  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 100, 0, 120, 120, 30);

  delay(500);

  chay_do_line_doc_cam_bien (cb_trai_phai, chay_phai, 36, 1 , 1, 200, 200, 25);

  delay(500);

  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 820, 1, 120, 120, 25);


  haxuong();

  tha();

  nanglen();

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 42, 1 , 1, 110, 110, 25);

  delay(500);

  quay_bat_line(quay_trai, 150, 24);


  chay_do_line_do_encoder (cb_truoc_sau, chay_toi, 100, 0, 120, 120, 30);

  delay(500);

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_toi, 31, 1 , 1, 200, 200, 25);

  delay(500);

  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 810, 1, 150, 150, 25);

  delay(5000);
}
