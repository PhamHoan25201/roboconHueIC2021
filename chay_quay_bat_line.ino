void chay_quay_bat_line(int huong_robot, int huong_quay, int toc_do, int cam_bien)
{
  int tt_cam_bien = 0;
  //nếu chạy 4 động cơ
  //      trái   -------- phải
  //phải  bánh 1 -------- bánh 2  trái
  //trái  bánh 3 -------- bánh 4  phải
  //      phải   -------- trái

  if(huong_quay == quay_trai)
  {
    if(huong_robot == chay_toi)
    {
      analogWrite(pwm1_toi, 0);
      analogWrite(pwm2_lui, 0);
      analogWrite(pwm3_toi, 0);
      analogWrite(pwm4_lui, 0);
      analogWrite(pwm1_lui, 0);
      analogWrite(pwm3_lui, toc_do);
      analogWrite(pwm2_toi, toc_do);
      analogWrite(pwm4_toi, toc_do);
    }
    if(huong_robot == chay_lui)
    {
      analogWrite(pwm1_toi, 0);
      analogWrite(pwm2_lui, 0);
      analogWrite(pwm3_toi, 0);
      analogWrite(pwm4_lui, 0);
      analogWrite(pwm4_toi, 0);
      analogWrite(pwm1_lui, toc_do);
      analogWrite(pwm3_lui, toc_do);
      analogWrite(pwm2_toi, toc_do);
    }
    if(huong_robot == chay_trai)
    {
      analogWrite(pwm1_toi, 0);
      analogWrite(pwm2_lui, 0);
      analogWrite(pwm3_toi, 0);
      analogWrite(pwm4_lui, 0);
      analogWrite(pwm3_lui, 0);
      analogWrite(pwm1_lui, toc_do);
      analogWrite(pwm2_toi, toc_do);
      analogWrite(pwm4_toi, toc_do);
    }
    if(huong_robot == chay_phai)
    {
      analogWrite(pwm1_toi, 0);
      analogWrite(pwm2_lui, 0);
      analogWrite(pwm3_toi, 0);
      analogWrite(pwm4_lui, 0);
      analogWrite(pwm2_toi, 0);
      analogWrite(pwm1_lui, toc_do);
      analogWrite(pwm3_lui, toc_do);
      analogWrite(pwm4_toi, toc_do);
    }
  }
  if(huong_quay == quay_phai)
  {
    //nếu chạy 4 động cơ
    //      trái   -------- phải
    //phải  bánh 1 -------- bánh 2  trái
    //trái  bánh 3 -------- bánh 4  phải
    //      phải   -------- trái
    if(huong_robot == chay_toi)
    {
      analogWrite(pwm1_lui, 0);
      analogWrite(pwm2_toi, 0);
      analogWrite(pwm3_lui, 0);
      analogWrite(pwm4_toi, 0);
      analogWrite(pwm2_lui, 0);
      analogWrite(pwm1_toi, toc_do);
      analogWrite(pwm3_toi, toc_do);
      analogWrite(pwm4_lui, toc_do);
    }
    if(huong_robot == chay_lui)
    {
      analogWrite(pwm1_lui, 0);
      analogWrite(pwm2_toi, 0);
      analogWrite(pwm3_lui, 0);
      analogWrite(pwm4_toi, 0);
      analogWrite(pwm3_toi, 0);
      analogWrite(pwm1_toi, toc_do);
      analogWrite(pwm2_lui, toc_do);
      analogWrite(pwm4_lui, toc_do);
    }
    if(huong_robot == chay_trai)
    {
      analogWrite(pwm1_lui, 0);
      analogWrite(pwm2_toi, 0);
      analogWrite(pwm3_lui, 0);
      analogWrite(pwm4_toi, 0);
      analogWrite(pwm1_toi, 0);
      analogWrite(pwm3_toi, toc_do);
      analogWrite(pwm2_lui, toc_do);
      analogWrite(pwm4_lui, toc_do);
    }
    if(huong_robot == chay_phai)
    {
      analogWrite(pwm1_lui, 0);
      analogWrite(pwm2_toi, 0);
      analogWrite(pwm3_lui, 0);
      analogWrite(pwm4_toi, 0);
      analogWrite(pwm4_lui, 0);
      analogWrite(pwm1_toi, toc_do);
      analogWrite(pwm3_toi, toc_do);
      analogWrite(pwm2_lui, toc_do); 
    }
  }
  do
  {
    tt_cam_bien = digitalRead(cam_bien);
  }while(tt_cam_bien == 0);
}
