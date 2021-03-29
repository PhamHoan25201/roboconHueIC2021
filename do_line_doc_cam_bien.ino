void chay_do_line_doc_cam_bien (int huong_cb, int huong_robot, int cam_bien, int dat_so_line, int chay_dung, int toc_do_trai, int toc_do_phai, float kp)
{
  int tt_cam_bien = 0;
  int dem_so_line= 0;
  do
  {
    do
    {
      doc_cam_bien_do_line(huong_cb);
      tinh_toan(kp);
      dieu_khien_dong_co(huong_robot, toc_do_trai, toc_do_phai);
      tt_cam_bien = digitalRead(cam_bien);
    }while(tt_cam_bien == 0);
    dem_so_line ++;
    if(dem_so_line < dat_so_line)
    {  do
      {
        tt_cam_bien = digitalRead(cam_bien);
      }while(tt_cam_bien == 1);
    }
    else 
    {
      if(chay_dung == 1)
      {
        dung_dong_co(huong_robot);
      }
    }
  }while(dem_so_line < dat_so_line);
}
