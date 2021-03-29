void chay_do_line_do_encoder(int huong_cb, int huong_robot, int encoder_dat, int chay_dung, int toc_do_trai, int toc_do_phai, float kp)
{
  xung_encoder1 = xung_encoder2 = xung_encoder3 = xung_encoder4 = 0;
  do
  {
    doc_cam_bien_do_line(huong_cb);
    tinh_toan(kp);
    dieu_khien_dong_co(huong_robot, toc_do_trai, toc_do_phai);
  }while(xung_encoder1 <= encoder_dat);
  if(chay_dung == 1)
  {
    dung_dong_co(huong_robot);
  }
}
