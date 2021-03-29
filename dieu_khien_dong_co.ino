void dieu_khien_dong_co(int huong_robot, int toc_do_trai, int toc_do_phai)
{
  gia_tri_dau_trai = toc_do_trai;
  gia_tri_dau_phai = toc_do_phai;
  PID_phai =  gia_tri_dau_phai - PID_value;
  PID_trai =  gia_tri_dau_trai + PID_value;
  PID_phai = constrain(gia_tri_dau_phai-PID_value,0,255);
  PID_trai = constrain(gia_tri_dau_trai+PID_value,0,255);

  gia_tri_dau_trai = toc_do_trai;
  gia_tri_dau_phai = toc_do_phai;
  PID_phai_1 =  gia_tri_dau_phai - PID_value_1;
  PID_trai_1 =  gia_tri_dau_trai + PID_value_1;
  PID_phai_1 = constrain(gia_tri_dau_phai-PID_value_1,0,255);
  PID_trai_1 = constrain(gia_tri_dau_trai+PID_value_1,0,255);
  //nếu chạy 4 động cơ
  //      trái   -------- phải
  //phải  bánh 1 -------- bánh 2  trái
  //trái  bánh 3 -------- bánh 4  phải
  //      phải   -------- trái
  if(huong_robot == chay_toi)
  {
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm2_lui, 0);
    analogWrite(pwm3_lui, 0);
    analogWrite(pwm4_lui, 0);
    analogWrite(pwm1_toi, PID_trai);
    analogWrite(pwm3_toi, PID_trai_1);
    analogWrite(pwm2_toi, PID_phai);
    analogWrite(pwm4_toi, PID_phai_1);
  }
  //      trái   -------- phải
  //phải  bánh 1 -------- bánh 2  trái
  //trái  bánh 3 -------- bánh 4  phải
  //      phải   -------- trái
  if(huong_robot == chay_lui)
  {
    analogWrite(pwm1_lui, PID_phai);
    analogWrite(pwm3_lui, PID_phai_1);
    analogWrite(pwm2_lui, PID_trai);
    analogWrite(pwm4_lui, PID_trai_1);
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm4_toi, 0);
  }
  //      trái   -------- phải
  //phải  bánh 1 -------- bánh 2  trái
  //trái  bánh 3 -------- bánh 4  phải
  //      phải   -------- trái
  if(huong_robot == chay_trai)
  {
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm2_lui, 0);
    analogWrite(pwm3_lui, 0);
    analogWrite(pwm4_toi, 0);
    analogWrite(pwm1_lui, PID_phai);
    analogWrite(pwm2_toi, PID_phai_1);
    analogWrite(pwm3_toi, PID_trai);
    analogWrite(pwm4_lui, PID_trai_1);
  }
  //      trái   -------- phải
  //phải  bánh 1 -------- bánh 2  trái
  //trái  bánh 3 -------- bánh 4  phải
  //      phải   -------- trái
  if(huong_robot == chay_phai)
  {
    //Serial.println("ok");
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm4_lui, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm2_lui, PID_trai_1);
    analogWrite(pwm1_toi, PID_trai);
    analogWrite(pwm4_toi, PID_phai_1);
    analogWrite(pwm3_lui, PID_phai);
  }
}
