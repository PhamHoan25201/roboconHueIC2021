void dung_dong_co(int huong_robot)
{
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
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm4_toi, 0);
    delay(5);
    analogWrite(pwm1_lui, 100);
    analogWrite(pwm2_lui, 100);
    analogWrite(pwm3_lui, 100);
    analogWrite(pwm4_lui, 100);
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm4_toi, 0);
    delay(50);
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm2_lui, 0);
    analogWrite(pwm3_lui, 0);
    analogWrite(pwm4_lui, 0);
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm4_toi, 0);
  }
  if(huong_robot == chay_lui)
  {
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm3_lui, 0);
    analogWrite(pwm2_lui, 0);
    analogWrite(pwm4_lui, 0);
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm4_toi, 0);
    delay(5);
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm3_lui, 0);
    analogWrite(pwm2_lui, 0);
    analogWrite(pwm4_lui, 0);
    analogWrite(pwm1_toi, 100);
    analogWrite(pwm2_toi, 100);
    analogWrite(pwm3_toi, 100);
    analogWrite(pwm4_toi, 100);
    delay(50);
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm3_lui, 0);
    analogWrite(pwm2_lui, 0);
    analogWrite(pwm4_lui, 0);
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm4_toi, 0);
  }
  //nếu chạy 4 động cơ
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
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm4_lui, 0);
    delay(5);
    analogWrite(pwm1_toi, 100);
    analogWrite(pwm2_lui, 100);
    analogWrite(pwm3_lui, 100);
    analogWrite(pwm4_toi, 100);
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm4_lui, 0);
    delay(50);
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm2_lui, 0);
    analogWrite(pwm3_lui, 0);
    analogWrite(pwm4_toi, 0);
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm4_lui, 0);
  }
  if(huong_robot == chay_phai)
  {
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm4_lui, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm2_lui, 0);
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm4_toi, 0);
    analogWrite(pwm3_lui, 0);
    delay(5);
    analogWrite(pwm2_toi, 100);
    analogWrite(pwm1_lui, 100);
    analogWrite(pwm4_lui, 100);
    analogWrite(pwm3_toi, 100);
    analogWrite(pwm2_lui, 0);
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm4_toi, 0);
    analogWrite(pwm3_lui, 0);
    delay(50);
    analogWrite(pwm2_toi, 0);
    analogWrite(pwm1_lui, 0);
    analogWrite(pwm4_lui, 0);
    analogWrite(pwm3_toi, 0);
    analogWrite(pwm2_lui, 0);
    analogWrite(pwm1_toi, 0);
    analogWrite(pwm4_toi, 0);
    analogWrite(pwm3_lui, 0);
  }
}
